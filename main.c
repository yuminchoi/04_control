#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	
	printf("Input a char:");
	scanf("%c", &c);
	
	if('A'<=c&&c<='Z')
	{
		printf("�빮���Դϴ�.");
	}
	
	else if('a'<=c&&c<='z')
	{
		printf("�ҹ����Դϴ�.");
	}
	
	else if('0'<=c&&c<='9')
	{
		printf("�����Դϴ�.");
	}
	
	else
	{
		printf("��Ÿ�����Դϴ�.");
	}
	
	return 0;
}
