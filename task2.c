#include <stdio.h>
#include <math.h>
int main(){
	int a;
	int b;
	int c;
	
	printf("Enter a number: \n");
	scanf("%d", &a);
	printf("Enter a number: \n");
	scanf("%d", &b);
	printf("Enter a number: \n");
	scanf("%d", &c);
	
    (a>b && a>c)? printf("a greater ",a) : (b>a && b>c)? printf("b greater",a) : (c>a && c>b)? printf("c greater") : printf("Invalid input") ;
return 0;
}



