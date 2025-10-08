// 08.10.25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	float x;
	scanf_s("%f",&x);
	double y = (5 - pow(x, 3)) / sqrt(3) + (2 * x) / 8;
	printf("%lf", y);
}


