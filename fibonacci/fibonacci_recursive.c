#include <stdio.h>

/* Recursive Fibonacci (inefficient, as requested) */
long long fib(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main(void) {
    int n;
    printf("Enter n (print first n Fibonacci terms and the nth value): ");
    if (scanf("%d", &n) != 1) return 1;
    if (n < 0) { printf("n must be non-negative\n"); return 1; }

    /* Print terms: define that term 0 = 0, term 1 = 1 */
    if (n == 0) {
        printf("Terms: 0\nFib(0) = 0\n");
        return 0;
    }

    printf("Terms:");
    for (int i = 0; i <= n; ++i) {
        printf(" %lld", fib(i));
    }
    printf("\nFib(%d) = %lld\n", n, fib(n));
    return 0;
}
