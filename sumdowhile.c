#include<stdio.h>
int main()
{
    int i=1, sum=0;
    printf("Sum from 1 to 10:\n");
    do{
        sum+=i;
        i++;
    }while(i<=10);
    printf("%d\n",sum);
    printf("By Chirag rai\nsec:L1");
    return 0;
}