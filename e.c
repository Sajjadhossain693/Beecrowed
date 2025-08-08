#include <stdio.h>
#include <math.h>

int main() {
    long long n, f=0;
    scanf("%lld", &n);

    for (long long i = 1; i <= n; i++) {
        f += (long long)(pow(-1, i)) * i; 
    }

    printf("%lld\n", f);
    return 0;
}