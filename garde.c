#include<stdio.h>
int main(){
  int score;
  printf("Enter score( 0-100 ): ");
   scanf("%d", &score);

   switch( score){
   case 1:
     printf("Grade: E\n");
     break;
   case 2:
     printf("Grade: D\n");
     break;
   case 3:
     printf("Grade: C\n");
     break;
   case 4:
     printf("Grade: B\n");
     break;
   case 5:
     printf("Grade: A\n");
     break;
   default:
     printf("Grade: F\n");
     break;
   }
    printf("By Chirag rai\n");
    printf("Sec L1"); 
   return 0;
}