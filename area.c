#include <stdio.h>

int main() 
{
    float length, width, area;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    area = length * width;

    printf("The area of the rectangle is: %.2f\n", area);
    printf("By Chirag rai\n");
    printf("Sec L1");
    return 0;
}