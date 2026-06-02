#include <stdio.h>
int main(){
    float a,b,sub;
    printf("Input a number:");
    scanf("%f",&a);
    printf("Input another number:");
    scanf("%f",&b);
    sub = a - b; 
    printf("The substaction between %f and %f is: %.2f",a,b,sub);
    return 0;
}