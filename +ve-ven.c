#include <stdio.h>
int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num < 0.0)
        printf("You entered a negative number.\n");
    else if (num > 0.0)
        printf("You entered a positive number.\n");
    else
        printf("You entered 0.\n");
    printf("By Chirag rai\n");
    printf("Sec L1");
    return 0;
}