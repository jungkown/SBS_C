#include <stdio.h>

int main(void){
   int num, absolute;

   printf("���� �Է�: ");
   //�Է¹� scanf("���Ĺ���", &����);
   //& : �ּҿ����� - ������ �ּҰ��� �����´�
   scanf("%d", &num);

   //���� ������(���� ������)
   //: (����) ? (�� �϶�) : (���� �ϋ�);

   absolute = num > 0 ? num : num * -1;
   printf("���� : %d \n",absolute);

   
   return 0;
}