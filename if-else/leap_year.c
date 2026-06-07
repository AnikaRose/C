#include<stdio.h>
int main(){
    int a;
    printf("Which year?\n");
    scanf("%d",&a);
    if(a%400==0){
        printf("%d is leap year.",a);
    }
    else if(a%4==0 && a%100!=0){
        printf("%d is leap year.",a);
    }

    else{
        printf("%d isn't leap year.",a);
    }



return 0;
}

