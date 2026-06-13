#include <stdio.h>


int main() {

    int n, temp, first, last, power = 1;

    scanf("%d", &n);

    temp = n;

    last = n % 10;

    while (temp >= 10) {
        temp /= 10;
        power *= 10;
    }

    first = temp;

    n = n - first * power;
    n = n - last;
    n = n + first;
    n = n + last * power;

    printf("%d\n", n);

    return 0;
}
