#include<stdio.h>

// Exercise 1-4
// celcius to fahr
int main() {
	float celsius, fahr;
	int lower, upper, step;

	lower = 0;   // lower limit of the tempature table
	upper = 300; // upper limit
	step = 20;   // step size

	celsius = lower;
	
	//print headers - Exersize 1-3
	printf("%3s %6s\n", "Cels", "Fahr");
	while(celsius <= upper) {
		fahr = celsius / 5.0 * 9.0 + 32.0;
		// printf lets us specify spacing on output 
		// by putting a char width before the type
		// for example giving a float %f a 6.2 would be
		// 6 chars before it can print
		// float precision of 2
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
