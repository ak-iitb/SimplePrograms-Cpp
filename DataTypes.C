#include <stdio.h>

int main ()
{
	// basic data types in C

	int i = 10;
	printf("%d\n", i);

	double d = 2;
	printf("%lf\n", d);
	printf("%.2lf\n", d);

	float f = 3.1456;
	printf("%f\n", f);
	printf("%.3f\n", f);

	long int l = 1456789085;
	printf("%ld\n", l);

	long long int ll = 111111111111111111;
	printf("%lld\n", ll);

	char c = 'A';
	printf("%c\n", c);

	return 0;
}