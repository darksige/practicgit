#include <stdio.h>
int main()
{
    int num=10;
    while(num>=1){
        printf("%d\n",num);
        num--;
        if(num==5){
            printf("exiting loop in %d\n",num);
            break;
        }
    }
    printf("Chirag rai \n sec:L1\n");
    return 0;
}