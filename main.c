#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y; //�ΰ��� �Է� ���� 
	char op; //������ ���� 
	int result; //���� ��� ���� 
	
	//�ΰ��� �Է�����, �Ѱ��� ������ ���� �Է� �ޱ� 
	printf("enter the calculation : ");
	scanf ("%d %c %d", &x, &op, &y);

   //�����ڿ� ���� ������� ���(result�� ����)
   if (op == '+') //+�� ���
       result = x + y;
   else if (op == '-')//-�� ���
       result = x - y;
   else if (op == '*') // *�� ���
       result = x * y;
   else  // /�� ���
       result = x / y;
    
   //printf�� ��� 
   printf("= %i\n", result);
	return 0;
}
