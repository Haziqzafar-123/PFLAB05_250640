#include <stdio.h>

int main(){
	int a=2,b=3;
	
	printf("The expression given is: \n (a&b)|(a^b)\n");
	printf("The step by step evaluation is:\n");
	printf("Step 1: (a&b)\n");
	printf("Step 2: (a^b)\n");
	printf("Step 3: (a&b)|(a^b)\n");
	printf("PROVE\n");
	printf("Lets consider a is 2 and b is 3\n"); 
    printf("(a & b) = %d\nThe binary value for this operation is : 10\n", a & b); 
    printf("(a ^ b) = %d\nThe binary value for this operation is : 1\n", a ^ b); 
    printf("(a & b)|(a ^ b) = %d\nThe binary value for this operation is : 11\n", (a & b)|(a ^ b)); 
    printf("Final result = 3 (in decimal and 11 in binary)");   
    
    return 0; 
}

