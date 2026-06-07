#include<stdio.h>
int main(){
    int a;
    printf("Enter a week number:\n");
    scanf("%d", &a);
    if(a == 1){
        printf("Saturday!\n");
    }
    else if(a == 2){
        printf("Sunday!\n");
    }
     else if(a == 3){
        printf("Monday!\n");
    }
     else if(a == 4){
        printf("Tuesday!\n");
    }
     else if(a == 5){
        printf("Wednesday!\n");
    }
     else if(a == 6){
        printf("Thursday!\n");
    }
     else if(a == 7){
        printf("Friday!\n");
    }
     else {
        printf("invalid input\n");
    }



return 0;
}
