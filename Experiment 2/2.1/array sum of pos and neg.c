// Type Content here...
#include<stdio.h>
#include<math.h>

void main(){
	int n;
	scanf("%d", &n);
	
	int a[n],i, psum, nsum;
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
		if(a[i]<0){
			nsum += a[i];
		}else if(a[i]>0){
			psum += a[i];
		}
	}

	printf("%d\n",psum);
	printf("%d\n", nsum);

	
}
