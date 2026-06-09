#include <stdio.h>
int main() {
    int n, i = 1, sum = 0;
    printf("To find sum of all numbers between 1 to n\n");
    printf("Enter n:\n");
    scanf("%d", &n);
    while(i <= n) {
        sum += i;
        i++;
    }
    printf("Sum of all numbers between 1 to n is: %d", sum);
    return 0;
}
