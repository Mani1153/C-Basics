#include<stdio.h>
#include<limits.h>
void main()
{
	printf("Short int:\n Signed: %hd to %hd\n", SHRT_MIN, SHRT_MAX);
	printf(" Unsigned: %d to %hu\n", 0, USHRT_MAX);
	printf("int:\n Signed: %d to %d\n", INT_MIN, INT_MAX);
	printf(" Unsigned: %d to %u\n", 0, UINT_MAX);
	printf("Long int:\n Signed: %ld to %ld\n", LONG_MIN, LONG_MAX);
	printf(" Unsigned: %d to %lu\n", 0, ULONG_MAX);
	printf("Long long int:\n Signed: %lld to %lld\n", LONG_LONG_MIN, LONG_LONG_MAX);
	printf(" Unsigned: %d to %llu\n", 0, ULONG_LONG_MAX);
}
