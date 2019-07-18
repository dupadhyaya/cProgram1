//Example #1: Program to Count Number of Digits in an Integer
#include <stdio.h>
int main()
{
    //long long n;
    int n ;
	int count = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        // n = n/10
        n /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
}



