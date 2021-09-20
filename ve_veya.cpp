#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *ve(int *, int *);
int *veya(int *, int *);

int main(){
	int arrayA[8] = {12, 42, 257, 129, 4, 96, 54, 789};
	int arrayB[12] = {53, 232, 12, 527, 125, 816, 54, 112, 745, 8, 96, 47 };

	printf("Array A: ");

	for(int a=0;a<8;a++){
		printf("%d ", arrayA[a]);
	}
	
	printf("\nArray B: ");

	for(int b=0;b<12;b++){
		printf("%d ", arrayB[b]);
	}



	printf("\n\nMatching elements: " );
	
	for(int k=0;k<3;k++){
		printf("%d ", *(ve(arrayA, arrayB) + k));
	}
	
	
	printf("\n\nMerged list: ");
	
//	veya(arrayA, arrayB);
	
	for(int k=0;k<17;k++){
		printf("%d ", *(veya(arrayA, arrayB) + k));
	}
	

	
	
	
	
	return 0;
}

int *ve(int *arrayA, int *arrayB){
	
	int veArray[10];
	int ctr=0;
/*	for(int a=0;a<8;a++){
		printf("\nArrayA[%d]: %d", a, arrayA[a]);
	}
	
	for(int b=0;b<12;b++){
		printf("\nArrayB[%d]: %d", b, arrayB[b]);
	}
*/
	for(int k=0;k<12;k++){
		for(int j=0;j<8;j++){
			if(arrayA[j] == arrayB[k]){
		//	printf("%d ", arrayA[j]);
			veArray[ctr] = arrayA[j];
			ctr++;
			}
		}
	}
	

 	return veArray;
	
}

int *veya(int *arrayA, int *arrayB){
	 int veyaArray[20];
	 int ctr = 8;
	 
	 
	 for(int i=0;i<8;i++){
	 	veyaArray[i] = arrayA[i];
	 }
	 
	 
/*	for(int a=0;a<8;a++){
		printf("\nArrayA[%d]: %d", a, arrayA[a]);
	}
	
	for(int b=0;b<12;b++){
		printf("\nArrayB[%d]: %d", b, arrayB[b]);
	}
*/
	 

	 
	 
	 for(int k=0;k<12;k++){
	 	int flag=0;
	 	int iter=0;
	 	for(int j=8;j<17;j++){
//	 		printf("\nArrayB[%d]: %d", k, arrayB[k]);
	 		
	 		if(veyaArray[iter] == arrayB[k]){
//	 			printf("\nveyaArray[%d]: %d", iter, veyaArray[iter]);
	 			flag=1;
//	 			printf("\nveyaArray[%d]: %d", j, veyaArray[j]);
	 			
	 			
			 }
//			 printf("\nFlag: %d", flag);
			 iter++;
//			 printf("\niter = %d", iter);
		 }
		 if(flag==0){
		 veyaArray[ctr] = arrayB[k];
		 ctr++;
		}
	 }
//	  printf("veyaArray: ");
//	 for(int g=0;g<20;g++){
//	 	printf("%d ", veyaArray[g]);
//	 }
	 return veyaArray;
}

