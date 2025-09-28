#include <stdio.h> 

int main(){ 
    int section; 
    int size; 
    int amount; 
    int type; 
    float bill; 
  
    printf("Enter the number of section in which you want to place order\n(1)Coffee Shop\n(2)Burger Hub\n(3)Ice Cream Parlour\n"); 
    scanf("%d", &section); 
  
switch(section){ 
    case 1 : 
    printf("Choose the size of coffee\n(1)Small- $100\n(2)Medium- $200\n(3)Large- $300\n"); 
    scanf("%d", &size);  
   
 if(size>3 || size<1){ 
    printf("Invalid input!"); 
    return 0; 
   } 
    printf("How many coffee do you want?\n"); 
    scanf("%d", &amount); 
 
 if(amount>1){ 
    printf("Check our combo offers!\n(1)10%% off for more than 5 small coffee\n(2)20%% off for more than 3 medium coffee\n(3)30%% off for more than two large coffee\n"); 
   }  
    printf("Choose coffee type\n(1)Regular\n(2)Cappuccino\n(3)Latte\n"); 
    scanf("%d", &type); 
if(type>3 || type<1){ 
    printf("Invalid input!"); 
    return 0; 
    } 
    printf("Thankyou for placing order!\n"); 
   break; 
    
  case 2 : 
   printf("Your order will be handled by Burger Hub section\n"); 
   return 0;
    
  case 3 : 
   printf("Your order will be handled by Ice Cream Parlour\n"); 
   return 0;
    
  default : 
    printf("Invalid input");
	return 0;  
 } 
  
 if(size == 1 && amount>5){ 
        bill = (amount * 100)-((amount * 100)*0.1); 
    } 
    else if(size == 2 && amount >3){ 
    bill = (amount * 200)-((amount * 200)*0.2); 
 } 
    else if(size == 3 && amount >3){ 
    bill = (amount * 300)-((amount * 300)*0.3); 
 } 
    else if(size == 1){ 
    bill = amount * 100; 
 } 
    else if(size == 2){ 
    bill = amount * 200; 
 } 
    else if(size == 3){ 
    bill = amount * 300; 
 } 
  
    printf("Your final bill is %.2f \n", bill); 
  
 return 0; 
} 
 
 

