#include <stdio.h>

int main() {
	int myNum = 20;
	float myFloatNum = 20.00;
	char myLetter = 'D';
	double myDoubleNum = 19.99;

	printf("The \"Hello, World!\" program is a great way for a beginners to learn a new programming language.\n");

	//Commenting on your code is important
	/* You can also comment on multiple lines
	if you prefer */

	//This uses the format specifier %d to display an int variable
	printf("%d\n", myNum); //Integer (whole number)

	//This uses the format specfier %c to display a char variable
	printf("%c\n", myLetter); //Character

	//This uses the format specifier %f to display a float variable
	printf("%f\n", myFloatNum); //Single precision floating point number (4 bytes)

	printf("My number is %d and my letter is %c\n", myNum, myLetter);

	//This uses the format specifier %lf to display a double variable
	printf("%lf\n", myDoubleNum); // Double precision floating point number (8 bytes)

	//Remove the additional zeros at the end of a floating point number
	printf("%.2lf\n", myDoubleNum); //Will print the number with only 2 decimals ('.2' added before 'lf')

	//Understanding type conversion
	float sum = (float) 5/2; //This allows the integer numbers 5 and 2 to be converted to floating point numbers and and the result will be a floating point number.
	printf("%f", sum);

	//This ends the main() function
	return 0;
}