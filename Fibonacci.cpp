#include <stdio.h>
#include <stdlib.h>

int fibonacci(int);

int main(){
	
	int a;
	int c;
	
	
	printf("Enter a number: ");
	scanf("%d", &a);
	
	
	printf("Result is: \n");
	
	for (c = 0;c<a;c++){
		printf("%d ", fibonacci(c));
	}
	
	
	
	
	
	
	return 0;
}

fibonacci(int a){


 if (a == 0){
 	return 0;
 }
 else if (a == 1){
 	return 1;
}
 else{
	return (fibonacci(a-1) + fibonacci(a-2)); 
}
		
}
