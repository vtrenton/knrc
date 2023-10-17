#include<stdio.h>

/* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300; floating-point version */
int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;   // lower limit of the tempature table
	upper = 300; // upper limit
	step = 20;   // step size

	fahr = lower;
	
	//print headers - Exersize 1-3
	printf("%3s %6s\n", "Fahr", "Celsius");
	while(fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		// printf lets us specify spacing on output 
		// by putting a char width before the type
		// for example giving a float %f a 6.2 would be
		// 6 chars before it can print
		// float precision of 2
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
