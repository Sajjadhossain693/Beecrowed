#include<stdio.h>
int main()
{
    char a[100];
    double b,c,d;
    scanf(" %s %lf %lf", &a, &b, &c);
    d = b +(c * 0.15);
    printf("TOTAL = R$ %.2lf\n", d);


    return 0;
}