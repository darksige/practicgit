#include<stdio.h>
#include<string.h>
int main(){
    char str1[50]= "Hello,";
    char str2[] ="world !";
    char str3[] ="by chirag rai";
    char str4[] ="Sec:L1";

int result =strcmp(str1, str2);
if (result == 0){
    printf("Strings are equal\n");
}else{
    printf("String are not equal\n");
}
printf("%s,%s\n", str3, str4);
    return 0;
}