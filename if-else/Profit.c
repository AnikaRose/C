#include<stdio.h>
int main(){
 int cost_price, sell_price, profit, loss ;
 printf("Enter your cost price:\n");
 scanf("%d", &cost_price);
 printf("Enter your selling price:\n");
 scanf("%d", &sell_price);

 profit = sell_price - cost_price ;
 loss = cost_price - sell_price ;

 if(profit>0){
    printf("Your profit is %d:\n", profit);

 }
 else {
        printf("Your loss is %d:\n", loss);

 }



return 0;
}

