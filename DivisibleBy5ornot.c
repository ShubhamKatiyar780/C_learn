#include<stdio.h>
int main () {
int x ;
printf("Enter an Integer = ");
scanf("%d",&x);
if (x%5==0) printf ("Devisible by 5");
if (x%5!=0) printf ("Not Devisible by 5");
//else  printf ("Not Devisible by 5");
    return 0;
}