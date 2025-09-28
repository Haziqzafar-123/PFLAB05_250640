#include <stdio.h>

int main(){
	int a;
	int b;
	int c;
	int highest;
	
	printf("Enter marks of Student 1: \n");
	scanf("%d", &a);
	printf("Enter marks of Student 2: \n");
	scanf("%d", &b);
	printf("Enter marks of Student 3: \n");
	scanf("%d", &c);
	
	highest= (a>b)? (a>c?a : c) : (b>c? b:c);
	
	printf("The highest mark is: %d\n", highest);
	
	return 0;
}

