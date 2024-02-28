#include <stdio.h>

int main() {
    int rows,i,j,k; 
	scanf("%d",&rows);// Number of rows in the pattern

    // Loop through each row
    for (i = 1; i <= rows; i++) {
        // Print the number of digits
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }

        // Print asterisks
        for (k = i; k < rows; k++) {
            printf("*");
        }

        printf("
"); // Move to the next line after printing each row
    }

    return 0;
}
