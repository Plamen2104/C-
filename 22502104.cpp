// 22502104.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double inches;
    scanf_s("%lf", &inches);
    double cm = inches * 2.54;
    printf("cm = %lf     ",cm);
    printf("inches = %lf", inches);
   
}

