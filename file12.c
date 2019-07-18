//multi dim arrays
#include <stdio.h>
int main()
{
int marks;
int marks2[5];
int marks3[5][2] ;
int i,j;

/*
printf("\n Enter Marks for marks \t ") ;
scanf("%d", &marks) ;
printf("\n The marks scored was %d" , marks) ;


printf("Enter 5 Marks for the student");
for(i=0;i<5;i++) {
	printf(" \n Enter mark %d \t ", i+1);
	scanf("%d",&marks2[i]);
}

for(i=0;i<5;i++) {
	printf("\n The mark %d is %d \t", i+1,marks2[i]);
}

*/

// Marks for 2 students for 5 subjects
printf("Enter 5 Marks for 2 student");

for(j=0;j<2;j++) {
	for(i=0;i<5;i++) {
		printf(" \n Enter mark Student-%d ,  Subject %d \t ",j+1, i+1);
		scanf("%d",&marks3[i][j]);
	}
}

for(j=0;j<2;j++) {
	for(i=0;i<5;i++) {
		printf(" \n Enter mark Student-%d ,  Subject %d is %d \t ",j+1, i+1, marks3[i][j]);
	}
}
printf("\n Program to work on arrays \n") ;
return 0;
}


