#include <stdio.h>

int main(void){
   int income  = 0;                 //����
   double tax;                      //����
   const double tax_rate = 0.12;    //����
    //const : ����� �����ϴ� Ű���� �̴� 
    //����� ���� �ٲܼ��� ����.
    //����� ����� ���ÿ� �ʱ�ȭ �Ѵ�.


    income = 1000;
    tax = income * tax_rate;        //1000���� ���� 12%

    printf("������ %.1lf �Դϴ�. \n",tax);
   
   return 0;
}