#include<stdio.h>
int main() {
    int amount, notes = 0;

    printf("Enter the amount of Bangladeshi taka:\n");
    scanf("%d", &amount);

    if(amount >= 1000){
        notes += amount / 1000;
        amount = amount % 1000;
    }
    if(amount >= 500){
        notes += amount / 500;
        amount = amount % 500;
    }
    if(amount >= 200){
        notes += amount / 200;
        amount = amount % 200;
    }
    if(amount >= 100){
        notes += amount / 100;
        amount = amount % 100;
    }
    if(amount >= 50){
        notes += amount / 50;
        amount = amount % 50;
    }
    if(amount >= 20){
        notes += amount / 20;
        amount = amount % 20;
    }
    if(amount >= 10){
        notes += amount / 10;
        amount = amount % 10;
    }
    if(amount >= 5){
        notes += amount / 5;
        amount = amount % 5;
    }
    if(amount >= 2){
        notes += amount / 2;
        amount = amount % 2;
    }
    if(amount >= 1){
        notes += amount;  // Remaining amount is all 1 taka notes
    }

    printf("Total number of notes: %d\n", notes);

    return 0;
}
