#include <stdio.h>

int main()
{
	int numb = 99;
	int *ptr= NULL;
	
	ptr = &numb;
	
	printf("Address of the number: %p\n", &numb);
	printf("Address of the pointer: %p\n", &ptr);
	printf("Value of the pointer: %p\n", ptr);
	printf("Value of what the pointer is pointing to: %d\n", *ptr);
	
	return 0;
}
