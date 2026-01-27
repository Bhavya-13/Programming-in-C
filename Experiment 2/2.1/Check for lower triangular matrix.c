// Type Content here...
#include<stdio.h>
int main(){
	int r,c;
	int is_lower = 1;

	printf("Enter no of rows, columns: ");
	scanf("%d %d", &r, &c);
	int m[r][c];
	if(r!=c){
		printf("Enter elements of matrix:\n");
		printf("Matrix must be square matrix\n");
		return 0;
	}

	printf("Enter elements of matrix:\n");
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			scanf("%d", &m[i][j]);
		}
	}
	for(int i=0; i<r; i++){
		for(int j=i+1; j<c; j++){
			if (m[i][j] != 0){
				is_lower = 0;
				break;
			}
		}

		if(is_lower == 0){
			break;
		}
	}

		if(is_lower){
			printf("Lower triangular matrix\n");
		}else{
			printf("Not a lower triangular matrix\n");
		}
		return 0;
	}


