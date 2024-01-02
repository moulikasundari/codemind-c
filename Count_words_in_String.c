#include <stdio.h>

int countWords(const char *str) {
    int wordCount = 0;
    int isInsideWord = 0;  // Flag to check if currently inside a word

    while (*str) {
        // If the current character is a whitespace character, set the flag to 0
        if (*str == ' ' || *str == '	' || *str == '
') {
            isInsideWord = 0;
        } 
        // If the current character is not a whitespace character and the flag is not set, increment the word count
        else if (isInsideWord == 0) {
            wordCount++;
            isInsideWord = 1;  // Set the flag to 1 to indicate that we are inside a word
        }

        str++;  // Move to the next character in the string
    }

    return wordCount;
}

int main() {
    char input[100];  // Assuming a maximum input size of 100 characters

    fgets(input, sizeof(input), stdin);

    int words = countWords(input);

    printf("%d
", words);

    return 0;
}
