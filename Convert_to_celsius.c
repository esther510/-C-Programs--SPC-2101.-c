//Hello World
/*
NAME:Esther were 
REG NO: PA106/G/28753/25
DESCRIPTION: PROGRAMME TO CONVERT TO CELSIUS 
*/
#include <stdio.h>
double convert_to_Celsius(double fahrenheit)
{
	double celsius=(fahrenheit-32)*5/9;
	return celsius;
}
int main()
{
double fahrenheit;
printf("Enter temperature in Fahrenheit: ");
scanf("%lf", &fahrenheit);

double celsius=convert_to_Celsius(fahrenheit);
printf("Temperature in Celcius = %.2f\n",celsius);	
	return 0;
}