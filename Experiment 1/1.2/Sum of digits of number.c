#include<stdio.h>
#include<math.h>

void main(){
	int num, temp, i,sum;
	
	scanf("%d", &num);
	
	if(10000<= num && num <= 99999){
		temp=num;
		while(temp>0){
			sum += temp%10;
			temp /= 10;
		}
		printf("%d\n", sum);
	}
	else{
		printf("Invalid input\n");
	}
	
}
