#include <stdio.h>
#include <stdlib.h>


struct oto{
	
	float motor;
	int renk;
	char model;
	int vites;
	
}oto2, oto3;

int main(){
	
//	struct oto oto1 = {.renk = 5, .model = 'A', .vites = 5, .motor = 1.6};
	struct oto oto1 = {1.3,2,'C',6};
	struct oto oto4 = {1.5,3,'D',4};
	
	printf("oto renk = %d model = %c vites = %d motor = %f\n", oto1.renk,
																oto1.model,
																oto1.vites,
																oto1.motor);
																
	oto2.model = 'A';
	oto2.motor = 2.4;
	oto2.vites = 5;
	oto2.renk = 1;
	
	oto3.model = 'F';
	oto3.motor = 4.0;
	oto3.vites = 6 ;
	oto3.renk = 2;
	
	printf("oto renk = %d model = %c vites = %d motor = %f\n", oto2.renk,
																oto2.model,
																oto2.vites,
																oto2.motor);
																
	printf("oto renk = %d model = %c vites = %d motor = %f\n", oto3.renk,
																oto3.model,
																oto3.vites,
																oto3.motor);
	
	
	
	
	
	
	
	
	return 0;
}
