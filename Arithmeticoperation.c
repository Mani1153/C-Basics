#include<stdio.h>
void main()
{
	// variable declaration
	int a, b,sum, diff, product, quotient, remainder, sum1 ;
	//initialization
	a = 30;
	b =4;
	//calculation
	sum = a+b;
	diff = a-b;
	product = a*b;
	quotient = a/b;
	remainder =a % b;
	sum1 = sum + diff + product + quotient + remainder;
	//output
	printf("Sum of %d and %d is %d\n", a, b, sum);
	printf("Difference of %d and %d is %d\n", a, b, diff);
	printf("Product of %d and %d is %d\n", a, b, product);
	printf("Quotient of %d and %d is %d\n", a, b, quotient);
	printf("Remainder of %d and %d is %d\n", a, b, remainder);
	printf("Sum of all Arithmetic Operations is %d", sum1);
}
