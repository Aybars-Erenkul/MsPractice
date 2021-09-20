#include <stdio.h>
#include <stdlib.h>

int main() {
	int a;
	int c;
	
	while(1){
	
	printf("\n\nEnter a number: ");
	scanf("%d", &a);
	if (a < 0){
		return 0;
	}
	while(a>0){
		if (a==1){
			break;
		}
		c=(a-1);
		
		while (c>0){
			a = c*a;
			c = c-1;
		}
		break;
		
	}
	
	printf("Factorial = %d ", a);
	
}
	
	return 0;
}
