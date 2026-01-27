// Type Content here...

#include<stdio.h>
#include<math.h>

void main(){
	int num,i;
	printf("Enter the number of values: ");
	scanf("%d", &num);

	printf("Enter values : ");

	double a[num], mean, var, deviation;

	for(i=0; i<num; i++){
		scanf("%lf", &a[i]);
	}

	//to calculate mean
	float sum;

	for(i=0; i<num; i++){
		sum += a[i];
	}
	mean = sum/num;
	printf("Mean = %.2lf\n", mean);

	//to calculate variation
	float vsum, sq;
	for(i=0; i<num; i++){
		var += pow(a[i]-mean,2);
	}
	var /= num;
	printf("Variance = %.2lf\n", var);

	deviation = sqrt(var);
	printf("Deviation  = %.2lf\n", deviation);
}
