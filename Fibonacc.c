#include <stdio.h>

long long fib_recursive(int n) {
    if (n <= 1) return n;
    return fib_recursive(n-1) + fib_recursive(n-2);
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    printf("%lld\n", fib_recursive(n));
    return 0;
}
