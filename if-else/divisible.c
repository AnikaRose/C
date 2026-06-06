
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    if(a%5==0 && a%11==0){
        printf("%d is divisible by both 5 and 11.",a);
    }
    else{
        printf("%d isn't divisible by both 5 and 11.",a);
        }
return 0;
}
