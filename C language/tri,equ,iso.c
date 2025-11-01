#include <stdio.h>
main() {
    float a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("\nThe triangle is VALID.");

        if (a == b && b == c) {
            printf("\nIt is an EQUILATERAL triangle.");
        } 
        else if (a == b || b == c || a == c) {
            printf("\nIt is an ISOSCELES triangle.");
        } 
        else {
            printf("\nIt is a SCALENE triangle.");
        }
    } 
    else {
        printf("\nThe triangle is NOT valid.");
    }
}

