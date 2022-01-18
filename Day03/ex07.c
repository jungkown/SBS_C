#include <stdio.h>

int main(void){
   //복합 대입연산자
   int A = 10;
   int B = 20;

   A += 10;             //A = A + 10;
   B += 20;             //B + B = 20;

   printf("A : %d\n",A);
   printf("B : %d\n",B);

   
   return 0;
}