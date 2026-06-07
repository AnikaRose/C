#include<stdio.h>
int main(){
  float a, b, c, sum1, sum2, sum3 ;
  printf("Enter the value of 1st arm of a triangle:\n");
  scanf("%f", &a);
   printf("Enter the value of 1st arm of a triangle:\n");
  scanf("%f", &b);
   printf("Enter the value of 1st arm of a triangle:\n");
  scanf("%f", &c);

  sum1 = a + b ;
  sum2 = b + c ;
  sum3 = a + c ;

  if((sum1>c) && (sum2>a) && (sum3>b)){
    printf("It's a valid triangle.\n");
  }
  else{
    printf("It isn't a valid triangle.\n");
  }
return 0;
}
