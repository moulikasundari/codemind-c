#include <stdio.h>

void printPattern(int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("
");
    }
}

int main() {
    int n; 
	scanf("%d",&n);// Number of rows
    printPattern(n);
    return 0;
}
