#include <stdio.h>
int main() {
    int n, i = 1, sum = 0;
    printf("To find sum of all odd numbers between 1 to n\n");
    printf("Enter n:\n");
    scanf("%d", &n);
    while(i <= n) {
        if(i % 2 != 0) sum += i;
        i++;
    }
    printf("Sum of all odd numbers between 1 to n is: %d", sum);
    return 0;
}
