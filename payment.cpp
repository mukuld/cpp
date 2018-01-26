#include <stdio.h>
#include <math.h>

/* The formula for calculating monthly payments for any loan is:
 *
 * A = (P*(r/12)/1-(1 + (r/12))^^-n
 * A = The payment amount
 * P = The initial principal
 * r = The loan's interest rate
 * n = The number of months
 */

float payment(float principal, float rate, int months)
{
	float top, bottom;

	//This line calculates the top half of the right side
	top = principal * (rate / 12.0);

	//This line calculates teh bottom half of the right side
	bottom = 1 - pow(1 + (rate / 12.0),-months);

	return (top / bottom);
}

int main(void)
{
	float principal, rate;
	int months;

	principal = 10000.0;
	rate = .05;

	for (int months = 12; months <= 60; months += 12)
	{
		printf("The monthly payment for a %d month, $%.2f car loan "
				"at %.2f%% is $%.2f\n", months, principal, rate * 100,
				payment(principal, rate, months));
	}
}
