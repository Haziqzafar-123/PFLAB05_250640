#include <stdio.h>
#include <math.h>

int main() {
	
	int radius;
	float pi =3.14159;
	float area;
	float circumference;
	float sqrtofradius;
	
	printf("Enter the radius of circular water tank \n");
	scanf("%d", &radius);
	
	area=pi*pow(radius,2);
	circumference=2*pi*radius;
	sqrtofradius=sqrt(radius);
	
	printf("Area of the water tank: %.2f\n", area);
	printf("Circumference of the circular water tank: %.2f\n", circumference);
	printf("Square root of radius is: %.2f", sqrtofradius);
	
	return 0;
	
	
}

