/*
Program:  Switch 
Made by:  Garrett Stanifer
Date:  2/17/2021
Use switch statements to convert temperatures
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double C, F, K, R;
	char choice;
	printf("Enter a Celcius temperature:  ");
	scanf("%lf", &C);
	printf("Choices of Temperature Scales for Conversion\n");
	printf("F--->Fahrenheit\n");
	printf("K--->Kelvin\n");
	printf("R--->Rankie\n)");
	printf("Enter the number corresponding to the desired temperature:  ");
	scanf(" %c", &choice);
	switch (choice)
	{
	case 1:
		F = 9.0 / 5 * C + 32;
		printf("The Fahrenheit equivalent is %.2lf\n", F);
		break;
	case 2:
		K = C + 273.15;
		printf("The kelvin equivalent is %.2lf\n", K);
		break;
	case 3:
		R = 9.0 / 5 * (C + 273.15);
		printf("The Rankie equivalent is %.2lf\n", R);
		break;
	default:
		printf("You have entered an improper choice.\n");
	}
	return 0;
}
