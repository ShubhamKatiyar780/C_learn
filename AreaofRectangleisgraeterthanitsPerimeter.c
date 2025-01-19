#include <stdio.h>

int main() {
    double length, breadth;

    // Input the length and breadth of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%lf", &breadth);

    // Calculate area and perimeter
    double area = length * breadth;
    double perimeter = 2 * (length + breadth);

    // Check if area is greater than perimeter
    if (area > perimeter) {
        printf("Area (%.2lf) is greater than perimeter (%.2lf)\n", area, perimeter);
    }
     else {
        printf("Area (%.2lf) is not greater than perimeter (%.2lf)\n", area, perimeter);
    }

    return 0;
}