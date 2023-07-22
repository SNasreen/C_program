#include <stdio.h>

int countSpecialNumbers(int maxDigits) {
    int count = 0;

    // Check all possible 4-digit numbers for repetitions
    for (int i = 0; i < maxDigits; i++) {
        for (int j = 0; j < maxDigits; j++) {
            for (int k = 0; k < maxDigits; k++) {
                if (i == j && i == k) {
                    count++;
                }
            }
        }
    }

    return count;
}

int calculateMaxVehicles(int numDistricts, char* letterRange, char* digitRange) {
    int maxLetters = strlen(letterRange);
    int maxDigits = strlen(digitRange);

    // Calculate the number of non-special numbers per district
    int nonSpecialPerDistrict = (maxLetters * maxLetters * maxDigits * maxDigits) - countSpecialNumbers(maxDigits);

    // Calculate the total number of non-special numbers for all districts
    int totalNonSpecialNumbers = nonSpecialPerDistrict * numDistricts;

    return totalNonSpecialNumbers;
}

int main() {
    int numDistricts;
    char letterRange[100];
    char digitRange[100];

    // Read the number of districts
    scanf("%d", &numDistricts);
    getchar(); // Read the newline character

    // Read the range of letters for the third part
    scanf("%s", letterRange);

    // Read the range of digits
    scanf("%s", digitRange);

    // Calculate the maximum number of vehicles that can be registered
    int maxVehicles = calculateMaxVehicles(numDistricts, letterRange, digitRange);

    // Print the result
    printf("%d\n", maxVehicles);

    return 0;
}
