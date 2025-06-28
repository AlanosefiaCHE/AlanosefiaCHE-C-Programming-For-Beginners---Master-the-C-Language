#include <stdio.h>

int main(int argc, char **argv)
{
	enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

	struct myCompanies {
	enum Company CompanyName[3];
		};
		
	struct myCompanies mcName = {{XEROX,GOOGLE,EBAY}};
	
	printf("Xerox number in array is: %d\n", mcName.CompanyName[0]);
	printf("Google number in array is: %d\n", mcName.CompanyName[1]);
	printf("Ebay number in array is: %d\n", mcName.CompanyName[2]);

	return 0;
}
