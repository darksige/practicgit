#include<stdio.h>
int main(){
    int arr[5]={3,6,1,8,2};
    printf("By Chirag rai\nsec=L1\n");
    int max =arr[0];
    for(int i=1; i<5; i++){
        if(arr[i] > max){
            max=arr[i];
        }
    }printf("Maximum element: %d",max);
    return 0;
}