#include <stdio.h>
int main() {
    int n, last, first;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    int temp = n;
    while(temp >= 10) temp /= 10;
    first = temp;
    printf("First digit = %d, Last digit = %d\n", first, last);
    return 0;
}
