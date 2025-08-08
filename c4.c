#include <stdio.h>
#include <string.h>

int main() {
    char A[100], B[100],temp;
    
    scanf("%s", A);
    scanf("%s", B);

    printf("%lu %lu\n", strlen(A), strlen(B));
    printf("%s%s\n", A, B);
     temp = A[0];
    A[0] = B[0];
    B[0] = temp;
    printf("%s %s\n", A, B);

    return 0;
}
