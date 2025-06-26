#include <stdio.h>

int main(){
	char myName[4];
	
	printf("Please enter your name: \n");
	scanf("%s", &myName);
	
	printf("Your name is: %s\n", myName);
	
	return 0;
}