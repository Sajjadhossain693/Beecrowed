#include<stdio.h>
int main(){
    char s[1000],t[1000];
    int count1=0,count2=0,i;
    scanf("%s %s",s,t);

    for(i=0 ;s[i] != '\0' ;i++){
      count1++;
    }
    for(i=0 ; t[i] != '\0' ;i++){
      count2++;
    }

    printf("%d %d\n",count1,count2);
    printf("%s %s\n",s,t);



    return 0;
}