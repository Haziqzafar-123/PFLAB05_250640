#include <stdio.h>

int main(){
	int num;
	
	printf("Enter a number: \n");
	scanf("%d", &num);
	
	(num %2==0)? printf("number is divisible by 2") : (num %3==0)? printf("number is divisible by 3") : printf("Odd and not divisible by 3") ;
	
	return 0;
}
