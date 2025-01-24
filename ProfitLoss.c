#include<stdio.h>
int main () {
 int CP;
printf("Enter the Cost Price : ");
scanf("%d",&CP);
int SP;
printf("Enter the Selling Price : ");
scanf("%d",&SP);

if(SP>CP) printf("Profit is : %d",SP-CP);

if(CP>SP) printf("Loss is : %d",CP-SP);

if(SP==CP) printf("No Profit & No Loss ");
    return 0;
}