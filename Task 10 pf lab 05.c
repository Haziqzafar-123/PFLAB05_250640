#include <stdio.h>
 
int main(){ 
  char time; 
  char color; 
  
 printf("Enter the color of traffic light(R/Y/G)\n"); 
 scanf(" %c", &color); 
 printf("Enter the time of day(B for before 22:00 and A for 22:00 or later 22:00)\n"); 
 scanf(" %c", &time); 
  
 switch(color){ 
 case 'R': 
    if(time == 'B' ){ 
     printf("Stop and Wait\n"); 
     } 
     else if(time == 'A' ){ 
      printf("Stop,but night caution allowed\n"); 
  } 
     else{ 
      printf("Invalid input for time\n"); 
  } 
  break;
   
 case 'Y': 
    if(time == 'B' || time == 'A' ){ 
     printf("Get Ready\n"); 
     } 
     else{ 
      printf("Invalid input for time\n"); 
     } 
  break; 
  
 case 'G': 
    if(time == 'B' || time == 'A' ){ 
    printf("Go\n"); 
     } 
    else{ 
      printf("Invalid input for time\n"); 
     } 
  break;
   
 default : 
  printf("Invalid signal\n"); 
  break;   
 }  
 return 0; 
}

