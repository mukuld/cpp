#include <stdio.h>

double interest(int principal, int period, double rate)
{
	double interest;
	interest = principal * period * (rate/100);
	return interest;
}

int main(void)
{
	int principal = 20000;		//In US Dollars
	int period = 24;			// 24 months
	int rate = 5;				//percent per month
	double intrst;
	
	intrst = interest(principal, period, rate);
	
	printf("The interest earned for pricipal amount of $%d for %d years and %d rate of interest is: $%g\n\n", principal, period, rate, intrst);
	return 0;
}
