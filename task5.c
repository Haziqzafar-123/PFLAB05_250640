#include <stdio.h>
int main(){
	int student1;
	int student2;
	int student3;
	
	printf("Enter marks of student 1: \n");
	scanf("%d", &student1);
	printf("Enter marks of student 2: \n");
	scanf("%d", &student2);
	printf("Enter marks of student 3 \n");
	scanf("%d", &student3);
	
    (student1>student2 && student1>student3)? printf("student 1 has greater marks ") : (student2>student1 && student2>student3)? printf("student 2 has greater marks") : (student3>student1 && student3>student2)? printf("student 3 has greater marks") : printf("Invalid input") ;
return 0;
}

