#include <stdio.h>
#include <limits.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int min_jumps(int Arr[], int N) {
    int jumps[N];
    jumps[0] = 0;
    for (int i = 1; i < N; i++) {
        jumps[i] = INT_MAX;
        for (int j = 0; j < i; j++) {
            if (j + Arr[j] >= i) {
                jumps[i] = min(jumps[i], jumps[j] + 1);
            }
        }
    }
    return jumps[N-1] != INT_MAX ? jumps[N-1] : -1;
}

