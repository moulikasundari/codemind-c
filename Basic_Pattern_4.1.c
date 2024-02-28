#include <stdio.h>

int main() {
    int rows; 
    scanf("%d",&rows);// Number of rows in the pattern
int i,j;
    // Loop through each row
    for (i = 0; i < rows; i++) {
        // Loop through each column
        for (j = 0; j <rows; j++) {
        	if(i%2==0)
			{ // For even rows and even columns, or odd rows and odd columns, print 0
                printf("0 ");
            }
            else { // For other cases, print 1
                printf("1 ");
            }
        }
        printf("
"); // Move to the next line after printing each row
    }

    return 0;
}
