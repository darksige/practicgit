#include<stdio.h>
int main(){
    int arr[4]={2,4,1,7};
    printf("By Chirag Rai\nsec:L1\n");
    printf("Original array: ");
    for(int i=0; i<4; i++){
        printf("%d",arr[i]);
    }
    printf("\nReversed array: ");
    for(int i=3;i>=0;i--){
        printf("%d",arr[i]);
    }
    return 0;
}
