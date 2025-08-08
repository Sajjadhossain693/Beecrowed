#include<stdio.h>
int main(){
    char word,count=0,i;
    scanf("%c", &word);
    for(i =65; i<=word; i++){
        count++;
    }
    printf("%d\n", count);
    


    return 0;
}