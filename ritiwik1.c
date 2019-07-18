#include<stdio.h>
int main()
{
    int x=11;
    printf("\n Old Value of x is %d ", x);
	x+=5;
	printf("\n After Addition Assignment operator has value %d",x);
	x-=5;  
	printf("\n After Subtraction Assignment operator has value %d",x);
	x*=5;
	printf("\n Multiplication Assignment operator has value %d",x);
	x/=5;
	printf("\n Division Assignment operator has value %d",x);
	x%=5;
	printf("\n Remainder Assignment operator has value %d",x);
	getch();
	system(0);
}

