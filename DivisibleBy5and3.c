#include<stdio.h>
int main () {
int x;
printf("Enter a number = ");
scanf("%.2d",&x);
if (x%5==0 && x%3==0 ) 
printf("It is Divisible by 5 and 3");
else printf("It is not Divisible by 5 and 3");
    return 0;
}
