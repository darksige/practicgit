#include <stdio.h>
int main() {    

    int number1, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculate the sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d \n", number1, number2, sum);
    printf("By Chirag Rai\n");
    printf("sec L1");
    return 0;
}