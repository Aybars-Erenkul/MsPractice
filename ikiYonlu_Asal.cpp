#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *isPrime(int);
int reverse(int);
int printEprimes(int, int);


int main(){
	int number;
	int start;
	int end;
	
	printf("Enter a number to see if it's prime or not: ");
	scanf("%d", &number);
	printf("%d is %s", number, isPrime(number));
	
	if(number > 9 && isPrime(number) == "prime."){
		printf("\n\nReversed: %d", reverse(number));
		
		printf("\nThe reversed number is %s", isPrime(reverse(number)));
		
		if(isPrime(number) == "prime." && isPrime(reverse(number)) == "prime."){
			printf("\nBoth numbers are prime.");
		}
		else{
			printf("\nBoth numbers aren't prime.");
		}
	}
	
	printf("\n\nEnter an interval with a space in between: ");
	scanf("%d %d", &start, &end);
	printEprimes(start,end);
	
	
	return 0;
}

char *isPrime(int number){
		int trial;
		int flag = 0;
		char *prime = "prime." ;
		char *notPrime = "not prime." ;
	
	if(number == 0 || number ==1){
		return notPrime;
	}
	else if(number < 0 ){
		return 0;
	}
	else{
	
	for(trial=2;trial<number;trial++){
		if (number % trial == 0){
			flag = 1;
		}
	}
	if (flag == 1){
		return notPrime;
	}
	else{
		return prime;
	}
}
	
}

int reverse(int number){
	int revint=0;
	int dgtCtr = 0;
	int tmp[10];
	int i = 0;
	int dgtMult=1;
	while(1){

		if(number)
		dgtCtr++;
		else
		break;

		int temp = number;
		number = number/10;
		tmp[i] = temp-number*10;
	//	printf("Current Tmp[%d]: %d\n", i,  tmp[i]);
		i++;
	//	printf("temp - number*10: %d\n",temp-number*10);
	//	printf("Current digitCtr: %d ", dgtCtr);
		

	}
		i = i-1;
		for(int k=0; k<i;k++){
	//		printf("TMP[%d]: %d\n", k, tmp[k]);
			dgtMult = dgtMult*10;
		}
	//	printf("\ndgtMult: %d", dgtMult);
		for(int k=0; k<=i;k++){
			revint = revint + tmp[k]*dgtMult;
			dgtMult = dgtMult/10;
		}


	return revint;

}

int printEprimes(int start, int end ){
	int iterate;
	int reversed;
	
	for(iterate=start;iterate<=end;iterate++){
		if(iterate>9 && isPrime(iterate) == "prime."){
			reversed = reverse(iterate);
			if(isPrime(reverse(iterate)) == "prime."){
				printf("%d ", iterate);
			}
		}
	}
	
	
}


