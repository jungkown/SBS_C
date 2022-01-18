#include <stdio.h>

int main(void){
   //논리연산자
   int num1 = 20, num2 = 10;
   int result;

//AND 연산 (&&)
   result = 1 && 1;
   printf("result 1: %d\n",result);

//행 복사 단축키
//:Alt + Shift + 아래화살표
// 한 줄 삭제 단축기
//: Ctrl + Shfit + k
   result =num1 == 20 && num2 == 10;
   printf("result 2: %d\n",result);
   
   //OR 연산(||)        둘중하나만 1이여야함
   result = 0 || 1;
   printf("result 3: %d\n",result);

   result = 0 || 0;
   printf("result 4: %d\n",result);

   //NOT 연산(!)        반전
   printf("result 5: %d\n",!0);
   printf("result 6: %d\n",!1);

   
   return 0;
}