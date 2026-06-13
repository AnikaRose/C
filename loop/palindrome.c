#include <stdio.h>
int main() {
    int n, t, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    t = n;
    while(n != 0) {
        rev = rev*10 + n%10;
        n /= 10;
    }
    if(t == rev) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}
