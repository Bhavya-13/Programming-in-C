#include<stdio.h>

void area_peri(float, float*, float*);
  
int main() {
	float radius, area, perimeter;
	
	scanf("%f",&radius);

	area_peri(radius, &area, &perimeter);

	printf("%.2f\n",area);
	printf("%.2f\n",perimeter);

	return 0;
}

void area_peri(float radius, float* area, float* perimeter) {
	float pi = 3.14;
	*area = pi* radius * radius;
	*perimeter = 2 *pi*radius;
}
