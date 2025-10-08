// zad2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double lev;
    scanf_s("%lf", &lev);
    double euro = lev / 1.9;
    printf("euro = %lf     ", euro);
    printf("lev = %lf", lev);
}

