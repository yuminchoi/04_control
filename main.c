#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number;
	
	printf("Input a number.");
	scanf("%d", &number);
	
	if (number>0)
	{
	  printf("����Դϴ�.");
    }
	
	else if(number==0)
	{
	  printf("0�Դϴ�.");
    }
    
	else
	{
	  printf("�����Դϴ�.");
    }
	
	
	
	return 0;
}
