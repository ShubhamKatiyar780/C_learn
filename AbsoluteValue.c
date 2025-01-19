#include<stdio.h>
int main () {
int x;
printf("Enter a Number : ");
scanf("%d",&x);
//if(x>=0) printf("Absolute Value is : %d",x);
if(x<0)  printf("Absolute Value is : %d",x*(-1)); //right line
   //else { x=x*(-1); printf("Absolute Value is : %d",x);} //right line
    return 0;
}