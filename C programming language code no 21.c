#include <stdio.h>
#include <conio.h>

void main() {
    int a, b, temp;

    // Input from the user
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    // Display numbers before swapping
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping logic
    temp = a;
    a = b;
    b = temp;

    // Display numbers after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);
    getch();
}