#include <stdio.h>

void printPattern(int rows) {
    int i, j, k;
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf("*");
        }
        for (k = 1; k <= i; k++) {
                printf("%d", i);
            {
                //printf("*");
            }
        }
         printf("
");
      
    }
}

int main() {
    int rows;
    scanf("%d",&rows);
    printPattern(rows);
    return 0;
}
