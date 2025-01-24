#include<stdio.h>
int main () {

int a ;
printf("Enter First Side : ");
scanf("%d", &a);

int b ;
printf("Enter Second Side : ");
scanf("%d", &b);

int c ;
printf("Enter Third Side : ");
scanf("%d", &c);

if ((a+b)>c && (b+c)>a && (c+a)>b)
    printf("It is Sides Of triangle");
    else printf("It is not Sides Of triangle");
    
    return 0;
}