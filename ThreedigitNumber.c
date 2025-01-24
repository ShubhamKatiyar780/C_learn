#include<stdio.h>
int main () {
int x ;
printf("Enter a number : ");
scanf("%d",&x);
if(x>99 && x<1000) printf("It is a Three Digit Number");
else printf("It is not a Three Digit Number") ;
    return 0;
}