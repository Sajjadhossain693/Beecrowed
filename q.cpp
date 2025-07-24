#include <stdio.h>
int main() {
 int steps,a,b;
 printf("You can not take more that 14 steps.\n");
 printf("How many steps do you want:");
 scanf("%d",&steps);
 char array[steps];
 printf("I want to take %d steps.\n",steps);
 if(steps<15)
   {
       for(int i=1; i<=steps;i++)
        {   printf("\nEnter two numbwes to define relation:");
            scanf("%d%d",&a,&b);
            printf("%d  %d",a,b);
           if(a>b)
             array[i]='>';
           else if (a<b)
             array[i]='<';
           else
             array[i]='=';
        }
        printf("\n\nOutput:\n");
        for(int i=1; i<=steps;i++)
        {   
            printf("%c\n",array[i]);
        }
        
   }
   else 
   printf("You break the condition.");

    return 0;
}



