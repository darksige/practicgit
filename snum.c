#include <stdio.h>

int main() {
    int choice;

    printf("Enter a number (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You have chosen number 1.\n");
            break;
        case 2:
            printf("You have chosen number 2.\n");
            break;
        case 3:
            printf("You have chosen number 3.\n");
            break;
        case 4:
            printf("You have chosen number 4.\n");
            break;
        case 5:
            printf("You have chosen number 5.\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
 printf("By Chirag rai\n");
 printf("Sec L1");
    return 0;
}