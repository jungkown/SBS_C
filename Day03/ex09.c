#include <stdio.h>

int main(void){
//증감연산자
//변수 앞에 작성하는 전위연산자(perfix)
// - 대부분의 연산자보다 연산 우선순위가 높다
//연산순서 1. ++  2. +   3.=
    int a = 10;
    int b = 20;
    int c;

    c = ++a + b;
    printf("c = %d\n",c);           //c = 31

//변수 뒤에 작성하는 후위연산자(postfix)
//- 대부분의 연산자보다 연순 우선순위가 낮다
//연산순서 1. +  2. =  3. ++

    int x = 10;
    int y = 20;
    int z;

    z = x++ + y;
    printf("z = %d\n",z);           //z =  30
   

   
   return 0;
}