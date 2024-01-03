//Author:Quinn Joseph Contaldi
//Date:2/2/2022
//Project 1

#include <stdio.h>

int main ()
{
	//The Color variables that will be used to record the user input
	char Color1, Color2, Color3;
	//The integer variable that will be used to store how many people chose the corresponding color
	double ColorAmount1, ColorAmount2, ColorAmount3;
	//Sum of the colors
	double ColorSum, ColorPrecent1, ColorPrecent2, ColorPrecent3;
	
	//For varible Color1 and amount of ColorAmount1
	printf("****FAVORITE COLORS****\n");
	printf("First Favorite Color, Space, Number:");
	scanf(" %c %lf", &Color1, &ColorAmount1);
	printf("Second Favorite Color, Space, Number:");
	scanf(" %c %lf", &Color2, &ColorAmount2);
	printf("Third Favorite Color, Space, Number:");
	scanf(" %c %lf", &Color3, &ColorAmount3);

	//Arithmetic operation
	ColorSum = (ColorAmount1+ColorAmount2+ColorAmount3);
	ColorPrecent1 = (ColorAmount1/ColorSum)*(100);
	ColorPrecent2 = (ColorAmount2/ColorSum)*(100);
	ColorPrecent3 = (ColorAmount3/ColorSum)*(100);

	//This prints out the user input 
	printf("YOUR COLORS:\n");
	printf("==========================================\n");
	printf("|| Percent  |   Quantity   |    Color   ||\n");
	printf("||==========|==============|============||\n");
	printf("||  %.2lf   |      %.0lf      |      %c     ||\n", ColorPrecent1, ColorAmount1, Color1);
	printf("||----------|------------- |------------||\n");
	printf("||  %.2lf   |      %.0lf      |      %c     ||\n", ColorPrecent2, ColorAmount2, Color2);
	printf("||----------|--------------|------------||\n");
	printf("||  %.2lf    |      %.0lf        |      %c      ||\n", ColorPrecent3, ColorAmount3, Color3);
	printf("==========================================\n");

return 0;
}
