#include <stdio.h>
int main(){
    float a,b,multi;
    printf("Input a number:");
    scanf("%f",&a);
    printf("Input another number:");
    scanf("%f",&b);
    multi = a * b; 
    printf("The multiplication of %f and %f is: %.2f",a,b,multi);
    return 0;
}