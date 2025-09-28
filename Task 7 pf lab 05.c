#include <stdio.h>
 
int main(){ 
  int attendance; 
  char exam; 
  char fee; 
  
    printf("How much is your attendance percentage\n"); 
    scanf("%d", &attendance); 
  
    if(attendance>=75){ 
    printf("Have you passed(P) or failed(F) the midterm exam ?\n"); 
    scanf(" %c", &exam); 
   
    if(exam == 'P'){ 
    printf("Have you paid the examination fee? Yes(Y) or No(N)\n"); 
    scanf(" %c", &fee); 
    
    if(fee == 'Y'){ 
    printf("You are eligible for final exams"); 
   } 
    else{ 
       printf("Please clear your dues to appear in the Final Exam");  
   } 
  } 
    else{ 
      printf("You are not eligible for final exam.");  
  } 
 } 
    else{ 
    printf("You are not eligible for final exam."); 
 } 
    return 0;  
} 

