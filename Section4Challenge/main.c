#include <stdio.h>

int main(int argc, char **argv)
{
	enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};


	typedef struct myCompanies {
	enum Company Google;
	enum Company Xerox;
	enum Company Ebay;
		};
		
	struct myCompanies structCompanies;
	
	structCompanies.Google = GOOGLE;
	structCompanies.Xerox= XEROX;
	structCompanies.Ebay = EBAY;

	
	printf("Xerox number is: %d\n", structCompanies.Xerox);
	printf("Google number is: %d\n", structCompanies.Google);
	printf("Ebay number is: %d\n", structCompanies.Ebay);

	return 0;
}
