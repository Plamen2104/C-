// zad3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double a;
    double b;
    scanf_s("%lf", &a);
   // printf("a = %lf", a);
    scanf_s("%lf", &b);
    //printf("a = %lf", b);
    double Perimeter = (a * 2 + b * 2);
    double S = (a * b);
    printf("Perimeter = %lf\n", Perimeter);
    printf("S = %lf\n", S);

}

