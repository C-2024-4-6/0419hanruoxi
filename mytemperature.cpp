#include <iostream>
#include"mytemperature.h"
using namespace std;

double fah_to_celsius(double cel)
{
	return (cel - 32) * 5 / 9;
}
double celsius_to_fah(double cel)
{
	return cel * 9/ 5 + 32;
}