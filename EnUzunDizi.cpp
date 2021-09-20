#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int *findRepeating (int matrix[6][6], int);

int main(){
	
	int number;

	int matrix[6][6] = {{1,2,3,4,5,6},
						{2,1,3,4,5,6},
						{1,2,4,4,4,6},
						{4,2,3,1,5,6},
						{1,2,3,4,1,6},
						{1,2,5,5,5,1}};
	
	for(int i=0;i<6;i++){
		printf("\n");
		for(int j=0;j<6;j++){
			printf("%d ", matrix[i][j]);
		}
	}
	
	printf("\n\nEnter the number to be observed: ");
	scanf("%d", &number);
	
	while(1){
		*findRepeating(matrix, number);	
		printf("\n\nEnter the number to be observed: ");
		scanf("%d", &number);
	}
	
	
	
	
	return 0;
}

int *findRepeating(int matrix[6][6], int check){
	
	int tempup=0, tempdown=0, templeft=0, tempright=0, tempul=0, tempur=0, tempdl=0, tempdr = 0;
	int flag=0;
	//check if the number is in the matrix.
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
		//	printf("\n\nNow at [%d][%d]", i,j);
			
			if (matrix[i][j] == check){
			//5	printf("\nFound");
				flag = 1;
			//check the nearest blocks.
				if(i!=0 && j!=0 && matrix[i-1][j-1] == check)//upleft
				{		
					int upleftflag = 1;
					int k = i;
					int l = j;
					while(k!=0 && l!=0 &&matrix[k-1][l-1] == check){
						k = k-1;
						l = l-1;
						upleftflag++;
				//			printf("LOOP?");
					}
				//		printf("UPLEFT");
				//		printf("\n\nFound %d repeating UPLEFT %d times", check, upleftflag);
						if(upleftflag>tempul){
							tempul = upleftflag;
						}
					}
				if(i!=0 &&matrix[i-1][j] == check)//up
				{
					int upflag = 1;
					int k = i;
					int l = j;
					while(k!=0 && matrix[k-1][l] == check){
						upflag++;
					//printf("\n-----UPFLAG = %d at matrix[%d][%d]", upflag, k-1, l);
						k = k-1;
					}
				//	printf("\n-----FINAL UPFLAG = %d", upflag);
				//	printf("\n\nFound %d repeating UPWARDS %d times", check, upflag);
					if(upflag>tempup){
						tempup = upflag;
					}
				}
				if(i!=0 && j!=5 && matrix[i-1][j+1] == check)//upright
				{	
					int uprightflag = 1;
					int k = i;
					int l = j;
					while(k!=0 && l!=5 && matrix[k-1][l+1] == check){
						uprightflag++;
						k = k-1;
						l = l+1;
						
					}
				//	printf("UPRIGHT");
				//	printf("\n\nFound %d repeating UPRIGHT %d times", check, uprightflag);
					if(uprightflag>tempur){
						tempur = uprightflag;
						}
					
				}
				if(j!=0 &&matrix[i][j-1] == check)//left
				{			
					int leftflag = 1;
					int k = i;
					int l = j;
					while(l!=0 && matrix[k][l-1] == check){
						leftflag++;
						l = l-1;
					}
				//	printf("\n\nFound %d repeating LEFT %d times", check, leftflag);
					if(leftflag>templeft){
						templeft = leftflag;
						}
					templeft = leftflag;
				}
				if(j!=5 && matrix[i][j+1] == check)//right
				{
					int rightflag=1;
					int k = i;
					int l = j;
					while(l!=5 && matrix[k][l+1] == check){
						rightflag++;
						l = l+1;
					}
				//	printf("\n\nFound %d repeating RIGHT %d times", check, rightflag);
					if(rightflag>tempright){
						tempright = rightflag;
						}
					
				}
				if(i!=5 && j!=0 && matrix[i+1][j-1] == check)//downleft
				{
					int downleftflag=1;
					int k = i;
					int l = j;
					while(k!=5 && l!=0 && matrix[k+1][l-1] == check){
						downleftflag++;
					//	printf("\n-----DLFLAG = %d at matrix[%d][%d]", downleftflag, i+1, j-1);
						k = k+1;
						l = l-1;
					}
					
				//	printf("\n\nFound %d repeating DOWNLEFT %d times", check, downleftflag);
					if(downleftflag>tempdl){
						tempdl = downleftflag;
					}
					
				}
				if(i!=5 && matrix[i+1][j] == check)//down
				{			
							int downflag = 1;
							int k = i;
							int l = j;
					while(k != 5 && matrix[k+1][l] == check){
						downflag++;
				//		printf("\n-----DOWNFLAG = %d at matrix[%d][%d]", downflag, k+1, l);
						k = k+1;
					}
				//	printf("\n-----FINAL DOWNFLAG = %d", downflag);
				//	printf("\n\nFound %d repeating DOWN %d times", check, downflag);
					if(downflag>tempdown){
					tempdown = downflag;
					}
				}
				if(i!=5 && j!=5 && matrix[i+1][j+1] == check)//downright
				{			
							
					int downrightflag = 1;
					int k = i;
					int l = j;
					while(k!=5 && l!=5 && matrix[k+1][l+1] == check){
					//	printf("\nDOWNRIGHTa girdi");
						downrightflag++;
						k = k+1;
						l = l+1;
					}
					
				//	printf("\n\nFound %d repeating DOWNRIGHT %d times", check, downrightflag);
					if(downrightflag>tempdr){
						tempdr = downrightflag;
					}
					
				}
				
			}

		}
	}

/*
	printf("\n\nUP: %d\n", tempup);
	printf("DOWN: %d\n", tempdown);
	printf("LEFT: %d\n", templeft);
	printf("RIGHT: %d\n", tempright);
	printf("UPLEFT: %d\n", tempul);
	printf("UPRIGHT: %d\n", tempur);
	printf("DOWNLEFT: %d\n", tempdl);
	printf("DOWNRIGHT: %d\n", tempdr);
	
*/
	
	if(flag==0){
		printf("Entered number does not exist in the matrix.");
	}

	else if(tempup > tempdr && tempup >  tempdl && tempup >  templeft ){
		printf("Longest repeated line for %d is %d times on a vertical line", check, tempup);
	}
	else if(templeft > tempup && templeft >  tempdl && templeft >  tempul ){
		printf("Longest repeated line for %d is %d times on a horizontal line", check, templeft);
	}
	else if(tempur > tempup && tempur > templeft && tempur >  tempul ){
		printf("Longest repeated line for %d is %d times on a diagonal line", check, tempur);
	}
	else if(tempul > tempup && tempul > templeft && tempul >  tempur ){
		printf("Longest repeated line for %d is %d times on a diagonal line", check, tempul);
	}
	else if(tempup == tempdl){
		printf("Longest repeated line for %d is %d times on a diagonal line and a vertical line", check, tempup);
	}
	
	else if(tempup == templeft){
		printf("Longest repeated line for %d is %d times on both vertical line and horizontal line", check, tempup);
	}
	
	
}
