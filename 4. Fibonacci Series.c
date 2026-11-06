#include <stdio.h>

int main(void) {
    int n, i;
    long long a = 0, b = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number of terms.\n");
        return 1;
    }

    printf("Fibonacci series:\n");
    for (i = 1; i <= n; i++) {
        printf("%lld ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");

    return 0;
}
