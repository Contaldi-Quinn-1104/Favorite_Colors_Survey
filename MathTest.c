//This file was used to test the mathematical equations used in the main project. In order to use this program please only use the main file color.c
#include <stdio.h>

int main ()
{
	//The Color variables that will be used to record the users input
	char Color1, Color2, Color3;
	//The integer variable that will be used to store how many people chose the corresponding color
	double ColorAmount1, ColorAmount2, ColorAmount3;
	//Sum of the colors
	double ColorSum, ColorPrecent1, ColorPrecent2, ColorPrecent3;
	
	//For varible Color1 and amount of ColorAmount1
	printf("****FAVORITE COLORS****\n");
	printf("First Favorite Color, Space, Number:");
	scanf("%c%lf", &Color1, &ColorAmount1);
	printf("Second Favorite Color, Space, Number:");
	scanf("%c%lf\n", &Color2, &ColorAmount2);
	printf("Third Favorite Color, Space, Number:");
	scanf("%c%lf\n", &Color3, &ColorAmount3);

	//Arithmetic operation
	ColorSum = (ColorAmount1+ColorAmount2);
	printf("colorsum is %lf\n", ColorSum);
	return 0;
}
