#include<stdio.h>
int main(){
    int number, a[]={20,30,40,50,60,80,90,100};
    printf("Enter a number to search: ");
    scanf("%d", &number);
    int found = -1;
    for(int i=0;i<8;i++){
        if(a[i]==number){
            found=i;
            break;
        }
    }
    if(found != -1){
        printf("%d Number found at position: %d\n",number, found);
    } else {
        printf("Number not found.\n");
    }
    return 0;
}