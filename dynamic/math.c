#include <stdio.h>
#include <math.h>
int main(){
    double x,result;
    printf("enter a value of x:\n");
    scanf("%lf", &x);
    result = pow(x,3) + 3*pow(x,2) + 4*x +2 ;
    printf("result: %lf",result);

    return 0;
}
