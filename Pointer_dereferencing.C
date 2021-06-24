#include<stdio.h>

int main ()
{
	int x = 10; // defined and initialize an integer variable x
	int* p; // defined a pointer variable p
	p = &x; // initialized p with the address of the variable x

	printf("%d\n", p); // print the value stored in the pointer variable p which is the address of interger variable x
	printf("%d\n", *p); // print the value at the address stored in the pointer variable p

	*p = 12; // modifying the value at the address stored by the pointer variable p
	printf("%d\n", x); // x should now be equal to 12

	return 0;
}