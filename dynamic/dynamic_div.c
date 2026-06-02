#include <stdio.h>
int main(){
    float a,b,div;
    printf("Input a number:");
    scanf("%f",&a);
    printf("Input another number:");
    scanf("%f",&b);
    div = a / b; 
    printf("The division is: %.2f",div);
    return 0;
}