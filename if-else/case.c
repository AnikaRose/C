#include<stdio.h>
int main(){

char ch;
printf("Enter a Alphabet.\n");
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z' )
       {
        printf(" It is a upper case alphabet.\n", ch);
       }


    else{
        printf(" It is lower case alphabet.\n ", ch);
    }

 return 0;
}

