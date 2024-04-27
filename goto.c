#include<stdio.h>
int main(){
    int num;
    start:
    printf("Enter a number between 1 and 10:");
    scanf("%d",&num);
    if (num<1 || num>10){
        printf("Invalid number. Please enter a number between 1 and 10.\n");
        goto start;
    }
    printf("you entered:%d\n",num);
    printf("By Chirag Rai\nSec L1\n");
    return 0;
}