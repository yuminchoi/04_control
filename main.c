#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=94;
	int i;
	int num=0;
	
	do
	 {
	 	printf("Guess number:");
	 	scanf("%d", &i);
	 	num++;
	 	
	 	if(i>answer)
	 	{
	 		printf("High\n");
		 }
		 
		else if(i<answer)
		{
			printf("Low\n");
		}
	 	
	 	else
	 	{
	 		printf("����!!\n");
		 }
	 	
	 }while (i!=answer);
	 
	 printf("trial: %i", num);
	 
	
	return 0;
}
