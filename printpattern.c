#include<stdio.h>

int main(){
    char str[]="MBSIR";
    int length = sizeof(str)/sizeof(char);
    for(int i = 1; i<= length; i++){
        for(int j = 0; j < i; j++){
            printf("%c", str[j]);
            }
            printf("\n");
    }
    printf("By Chirag Rai\nSec:L1");
    return 0;
}