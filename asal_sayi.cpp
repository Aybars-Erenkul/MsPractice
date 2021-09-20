#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a;
	int c;
	
	while(1){
	int f= 0;
	
	printf("\nEnter a number: ");
	scanf("%d", &a);
	if(a == 0 || a ==1){
		printf("Asal sayi degil\n");
		continue;
	}
	else if(a < 0 ){
		return 0;
	}
	else{
	
	for(c=2;c<a;c++){
		if (a % c == 0){
			f = 1;
		}
	}
	if (f == 1){
		printf("Asal sayi degil\n");
	}
	else{
		printf("Asal sayi\n");
	}
}
}
	return 0;
}
