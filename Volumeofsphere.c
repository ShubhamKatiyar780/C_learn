#include<stdio.h>
int main () {
float radius ;

printf("Enter the Radius of Sphere : ");
scanf("%f", &radius);

float volume = 1.333344 * 3.141592 * radius * radius * radius;
printf("The Volume Of Sphere : %f", volume);

    return 0;
}