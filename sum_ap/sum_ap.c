#include <stdio.h>

/* Sum of first n natural numbers: S = n*(n+1)/2 */
int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 1;
    if (n <= 0) { printf("n must be positive\n"); return 1; }
    long long sum = n * (n + 1) / 2;
    printf("%lld\n", sum);
    return 0;
}
