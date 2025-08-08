#include<stdio.h>
int main(){
int s,x,n;
    scanf("%d%d%d", &s,&x,&n);
    int dumpling;
    dumpling = (s+n+1)/n;
    if(dumpling <= s){
        printf("%d", dumpling);
    } else {
        printf("Rip you Po!\n");
    }
    return 0;
}