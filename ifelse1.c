#include<stdio.h>
int main()
{
	printf("hello \n");
	
	char grade;
	printf(" Enter your Grades in Character ");
	scanf("%c",&grade);
	printf(" You have entered %c \n",grade);
	
	// using if else
	if ((grade=='a') || (grade=='A'))
		printf(" Grade is Excellent");
	else if (grade=='b')
		printf("Grade is Good") ;
	else
		printf(" Invalid Grade Entered");
		
	// using switch
	printf("\n Using Switch \n");
	switch(grade)
	{
		case 'a':
		case 'A':
			printf(" Excellent grade");
			break ;
		case 'b' :
			printf(" Good Grades") ;
			break ;
		default :
			printf(" Invalid Grades");
	}

	printf("\n Using ? Operator \n");

	// using ? Operator 	Exp1 ? Exp2 : Exp3;
	grade = 'a' ? printf("Excellent") : printf("Good") ;

	return(0);
	
}
