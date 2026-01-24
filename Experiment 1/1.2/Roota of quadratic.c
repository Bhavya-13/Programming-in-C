// Type Content here...
#include<stdio.h>
#include<math.h>
void main(){
	double a,b,c;
	double d;
	double r1,r2;
	double real,img;

	printf("Enter coefficients a, b and c: ");
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);

	d = (b*b)-(4*a*c);

	if(d>0){
		r1 = (-b + sqrt(d))/(2*a);
		r2 = (-b - sqrt(d))/(2*a);
		printf("root1 = %.2lf and root2 = %.2lf\n", r1, r2);
	}
	
	else if(d==0){
		r1= -b/(2*a);
		printf("root1 = root2 = %.2lf\n",r1);
	}

	else{
		real = -b/(2*a);
		img = sqrt(-d)/(2*a);
		printf("root1 = %.2lf+%.2lfi and root2 = %.2lf-%.2lfi\n",real,img,real,img);
	}
	
}




