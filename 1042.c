#include<stdio.h>
int main(){
    int n=3,i,j;
    int arry[n],original[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arry[i]);
         original[i] = arry[i];
    }
    for(i=0; i < n-1 ;i++){
        for(j=0;j<n-i-1 ; j++){
            if(arry[j] > arry[j+1]){
            int temp=arry[j];
            arry[j]=arry[j+1];
            arry[j+1]=temp;
        }
    }
}

    for(i = 0; i < n; i++) {
        printf("%d\n", arry[i]);
}
printf("\n");

for(i = 0; i < n; i++) {
        printf("%d\n", original[i]);
    }   
    return 0;
}
