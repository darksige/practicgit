#include<stdio.h>
#include <string.h>
int main() {
    char str[]= "hello world";
    char str2[]="by Chirag rai";
    char str3[]="Sec=L1";

    int length= strlen(str);
    printf("Length of string is :%d\n", length);
    
    printf( "%s, %s\n", str2, str3);
    
    return 0;
}