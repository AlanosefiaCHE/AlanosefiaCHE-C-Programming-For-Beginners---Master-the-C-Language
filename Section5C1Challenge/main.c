#include <stdio.h>


double daysBasedOnMinutes(double minutes){
	return minutes/1440;
	};
double yearsBasedOnMinutes(double minutesInYear, double minutes){
	return minutes/minutesInYear;
	};
	
int main()
{
	int minutes = 0;
	double minutesInYear = 525600;
	
	
	printf("Give me any amount of minutes\n");
	scanf("%d", &minutes);
	
	double years = yearsBasedOnMinutes(minutesInYear,minutes);
	double days = daysBasedOnMinutes(minutes);
	
	printf("Minutes in a day are: %.2f\n", days);
	printf("Minutes in a year are: %.10f\n", years);


	return 0;
}
