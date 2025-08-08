#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,inside_root,root1,root2;
    scanf("%lf %lf %lf", &a, &b, &c);
   inside_root = b*b - 4 * a * c;
    if (inside_root == 0 || inside_root < 0) {
        printf("Impossivel calcular\n");
    } else {
         root1 = (-b + sqrt(inside_root))/ (2 * a);
         root2 = (-b - sqrt(inside_root))/ (2 * a);
        printf("R1 = %.5lf\n", root1);
        printf("R2 = %.5lf\n", root2);
    }   

    return 0;

}