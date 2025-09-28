#include <stdio.h>

int main() {
	int num;
	char ans;
	
	printf("Enter a number: \n");
	scanf("%d", &num);
	
	printf("%s\n",(num %2==0)?"number is divisble by 2" : (num%3==0)?"number is divisble ny 3" : "Odd and not divisble by 3");
	
	return 0;
}

