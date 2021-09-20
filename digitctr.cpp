#include "stdio.h"

int main()
{
	
	int a = 287;
	int digitCtr = 0;
	while(true)
	{
		printf("a: %d\n",a);

		if(a)
		digitCtr++;
		else
		break;
		int temp = a;

		a = a/10;
						printf("temp - a: %d\n",temp -a*10);


	}
	
	printf("digitCtr: %d\n",digitCtr);
	
	return 0;
}
