#include <stdio.h>
int main() {
    int n, last, first;
    printf("Enter a number(above 10): ");
    scanf("%d", &n);
    if(n< 10){
        printf("Your number is below 10\n");
    }
    else{
    last = n % 10;
    int temp = n;
    while(temp >= 10) temp /= 10;
    first = temp;
    printf("Sum of first and last digit = %d\n", first + last);
    }
    return 0;
}
