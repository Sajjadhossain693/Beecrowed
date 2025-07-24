#include <stdio.h>

int main() {
    int x, n = 0;
    char operator[100];

    scanf("%d", &x);

    for (int i = 0; i < x; i++) {
        scanf("%s", operator); 

        if ((operator[0] == 'X' || operator[0] == 'x') && operator[1] == '+' && operator[2] == '+') {
    n++;
} else if ((operator[0] == 'X' || operator[0] == 'x') && operator[1] == '-' && operator[2] == '-') {
    n--;
} else if (operator[0] == '+' && operator[1] == '+' && (operator[2] == 'X' || operator[2] == 'x')) {
    ++n;
} else if (operator[0] == '-' && operator[1] == '-' && (operator[2] == 'X' || operator[2] == 'x')) {
    --n;
}

    }

    printf("%d\n", n); 
    return 0;
}
