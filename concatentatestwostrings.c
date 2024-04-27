#include<stdio.h>
#include<string.h>
int main(){
    char str1[50]= "Hello,";
    char str2[] ="world !";
    char str3[] ="By Chirag Rai";
    char str4[] ="Sec:L1";

    strcat(str1, str2);
    printf("%s\n",str1);

    strcat(str3,",");
    strcat(str3,str4);
    printf("%s\n",str3);
    return 0;
}
