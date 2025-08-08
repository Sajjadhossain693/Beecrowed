#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int year=a/365;
    int month=(a%365)/30;
    int day=(a%365)%30;
    printf("%d ano(s)\n", year);
    printf("%d mes(es)\n", month);
    printf("%d dia(s)\n", day);
    return 0;
}