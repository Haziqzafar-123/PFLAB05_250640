#include <stdio.h>
int main(){
	char a ;
	char b ;
	char c ;
	int vowel = 0;
	int consonant = 0;
	
	printf("Enter any alphabet ");
	scanf(" %c", &a);
    printf("Enter any alphabet ");
	scanf(" %c", &b);
	printf("Enter any alphabet ");
	scanf(" %c", &c);
	
	if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ||
	   a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'){
	   	vowel = vowel + 1;
	   }
	   else{
	   	consonant = consonant + 1;
	   }
	   
	   if(b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u' ||
	      b == 'A' || b == 'E' || b == 'I' || b == 'O' || b == 'U'){
	   	vowel = vowel + 1;
	   }
	   else{
	   	consonant = consonant + 1;
	   }
	   
	   if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
	      c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
	   	vowel = vowel + 1;
	   }
	   else{
	   	consonant = consonant + 1;
	   }
	    
	    printf("Vowels : %d\n", vowel);
	    printf("consonants : %d", consonant);
	    
	return 0;
}
