#include<stdio.h>
#include<string.h>
int main(){
    char str1[50]= "Hello,";
    char str2[] ="world !";
    char str3[] ="by chirag rai";
    char str4[] ="Sec:L1";
    strcpy(str2, str1);
    printf("Copied string:%s\n", str2);
    printf("%s,%s\n", str3, str4);
    return 0;
}   