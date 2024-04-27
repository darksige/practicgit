#include<stdio.h>
#include <string.h>
int main() {
    char str[]= "hello world";
    char str2[]="by Chirag rai";
    char str3[]="Sec=L1";

    strrev(str);
    printf("Reversed string: %s\n",str);

    printf("%s,%s\n",str2,str3);

    return 0;
}