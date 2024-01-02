#include<stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int a[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n/2; i++) {
        // Print pairs of elements with a space in between
        printf("%d %d ", a[i], a[n - i - 1]);
    }

    // If n is odd, print the middle element
    if (n % 2 != 0) {
        printf("%d ", a[n/2]);
    printf("0");
    }

    return 0;
}
