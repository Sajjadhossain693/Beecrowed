#include <stdio.h>

int main() {
    float a;
    scanf("%f", &a);

    int note100 = a / 100;
    a = (int)a % 100;

    int note50 = a / 50;
    a = (int)a % 50;

    int note20 = a / 20;
    a = (int)a % 20;

    int note10 = a / 10;
    a = (int)a % 10;

    int note5 = a / 5;
    a = (int)a % 5;

    int note2 = a / 2;
    a = a - note2 * 2;  // now a has only coin part (float)

    int coin1 = a / 1;
    a = a - coin1 * 1;

    int coin050 = a / 0.5;
    a = a - coin050 * 0.5;

    int coin025 = a / 0.25;
    a = a - coin025 * 0.25;

    int coin010 = a / 0.10;
    a = a - coin010 * 0.10;

    int coin005 = a / 0.05;
    a = a - coin005 * 0.05;

    int coin001 = a / 0.01 + 0.0001; // to avoid precision error

    // Output
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", note100);
    printf("%d nota(s) de R$ 50.00\n", note50);
    printf("%d nota(s) de R$ 20.00\n", note20);
    printf("%d nota(s) de R$ 10.00\n", note10);
    printf("%d nota(s) de R$ 5.00\n", note5);
    printf("%d nota(s) de R$ 2.00\n", note2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", coin1);
    printf("%d moeda(s) de R$ 0.50\n", coin050);
    printf("%d moeda(s) de R$ 0.25\n", coin025);
    printf("%d moeda(s) de R$ 0.10\n", coin010);
    printf("%d moeda(s) de R$ 0.05\n", coin005);
    printf("%d moeda(s) de R$ 0.01\n", coin001);

    return 0;
}
