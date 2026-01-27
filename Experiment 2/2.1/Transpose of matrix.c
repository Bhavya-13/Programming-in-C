#include <stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int m[n][n], t[n][n];

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d", &m[i][j]);
		}
	}

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			t[j][i] = m[i][j];
		}
	}

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}
