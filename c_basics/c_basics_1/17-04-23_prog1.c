#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define ROWS 3
#define COLS 4
char board[ROWS][COLS] = {{'A', 'B', 'C', 'E'},{'S', 'F', 'C', 'S'},{'A', 'D', 'E', 'E'}};
bool is_valid(int i, int j)
{
    return i >= 0 && i < ROWS && j >= 0 && j < COLS;
}
int find_word(char *word, int i, int j, int k, bool visited[ROWS][COLS])
 {
    if (k == strlen(word))
    {
        return 1;
    }
    if (!is_valid(i, j) || visited[i][j] || board[i][j] != word[k])
        {
            return 0;
        }
    visited[i][j] = true;
    bool found = find_word(word, i+1, j, k+1, visited) || find_word(word, i-1, j, k+1, visited) || find_word(word, i, j+1, k+1, visited) || find_word(word, i, j-1, k+1, visited);
    visited[i][j] = false;
    return found;
}
int exist(char *word) {
    bool visited[ROWS][COLS];
    memset(visited, false, sizeof(visited));
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (find_word(word, i, j, 0, visited))
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    char word1[50];
    scanf("%s",&word1);
    printf("%s\n", exist(word1) ? "true" : "false");
    return 0;
}
