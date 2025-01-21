#include<stdio.h>
int main () {
float x;
printf("Enter a Real Number : ");
scanf("%f",&x);
int y = (int)x; //typecasting
float z = (float)y;
if(x-z==0) printf("Number is Integer");
if(x-z>0) printf("Number is not Integer");
    return 0;
}