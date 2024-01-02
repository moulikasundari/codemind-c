#include <stdio.h>

int main() {
    char input[100];  // Assuming a maximum input size of 100 characters
    int lowercaseCount = 0;
    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != NULL; i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            lowercaseCount++;
        }
    }

    printf("%d
", lowercaseCount);

    return 0;
}
