#include <stdio.h>

long long factorial(int n) {
    if (n < 0) return -1;
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main(void) {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1) return 1;
    long long res = factorial(n);
    if (res < 0) printf("Factorial undefined for negative n\n");
    else printf("Factorial(%d) = %lld\n", n, res);
    return 0;
}
