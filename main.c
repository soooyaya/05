#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 59;
	int x;
	int trial = 0; 
	
	
	do 
	{ 
 	   printf("Guess the number! : "); // �Է��ض� ���� ���
 	    scanf("%d", &x);  // �Է��� ����
 	    trial = trial +1;
 	    
 	    if (x<answer)  //�Է¼��ڰ� ���亸�� ū�� ������ ��� 
		   printf("Low!\n");
		else if (x>answer)
		   printf("High!\n");
		
		
	}
	while (x!=answer); // ����� ������ ���� �Ǵ� 
	  printf("Congratulation!\n"); 
	
	printf("Number of trial = %i\n", trial); //�õ� Ƚ�� ��� 
	return 0;
}
