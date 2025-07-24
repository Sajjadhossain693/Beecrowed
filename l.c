#include <stdio.h>

int is_lucky(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7)
            return 0;  // Not lucky
        num /= 10;
    }
    return 1;  // Lucky
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (is_lucky(i) && (n % i == 0)) {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");
    return 0;
}
