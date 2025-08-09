#include <stdio.h>

// Dit is sectie 6.1
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
	
	printf("%d minutes is equal to: %.2f days\n", minutes, days);
	printf("%d minutes is equal to: %.10f years\n", minutes, years);

	return 0;
}
