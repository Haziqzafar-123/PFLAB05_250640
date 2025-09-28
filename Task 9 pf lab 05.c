#include <stdio.h>
 
int main(){ 
    int pin; 
	int balance = 5000;
	int amount; 
	int remainingbalance; 
  
    printf("Enter a 4-digit PIN \n"); 
    scanf("%d", &pin); 
  
 if (pin == 1234){ 
    printf("Enter the withdrawal amount \n"); 
    scanf("%d", &amount); 
if(amount<=balance && amount>0){ 
    remainingbalance = balance - amount; 
    printf("Transaction Successful\n");  
    printf("Your remaining balance is %d \n", remainingbalance); 
  } 
   else if(amount<=0){ 
    printf("Invalid input\n"); 
  } 
   else{ 
    printf("Insufficient balance\n"); 
  } 
 } 
 else{ 
    printf("Wrong PIN\n"); 
 } 
  
 return 0; 
}
 
 
 

