#include<stdio.h>
int main(){
    int a, b;
    printf("Input 1st number:\n",a);
    scanf("%d", &a);
    printf("Input 2nd number:\n",b);
    scanf("%d", &b);
    if(a>b){
        printf("%d is maximum.",a);
    }
    else{
         printf("%d is maximum.",b);
    }
   return 0;
    }

