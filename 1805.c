#include<stdio.h>
int main()
{
    long long a,b,i,sum=0;
    scanf("%lld %lld", &a, &b);
    for(i=a;i<=b;i++){
        sum+=i;

    }
    printf("%lld\n", sum);
    return 0;
}
