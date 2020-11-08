#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double P, S;
	int k, i;

	P = 1;
	k = 1;

	while (k <= 20)
	{
		S = 0;
		i = 1;
		while (i <= k)
		{
			S += abs(cos(i + k));
			i++;
		}
		P *= (sqrt((sin(1. * k)) * (sin(1. * k)) + (abs(cos(i + k)))) + S);
		k++;

	}
	cout << P << endl;

	P = 1;
	k = 1;
	do {
		S = 0;
		i = 1;
		do {
			S += abs(cos(i + k));
			i++;
		} while (i <= k);
		P *= (sqrt((sin(1. * k)) * (sin(1. * k)) + (abs(cos(i + k)))) + S);
		k++;
	} while (k <= 20);
	cout << P << endl;

	P = 1;
	for (k = 1; k <= 20; k++)
	{
		S = 0;
		for (i = 1; i <= k; i++)
		{
			S += abs(cos(i + k));
		}
		P *= (sqrt((sin(1. * k)) * (sin(1. * k)) + (abs(cos(i + k)))) + S);
	}
	cout << P << endl;

	P = 1;
	for (k = 20; k >= 1; k--)
	{
		S = 0;
		for (i = 1; i <= k; i++)
		{
			S += abs(cos(i + k));
		}
		P *= (sqrt((sin(1. * k)) * (sin(1. * k)) + (abs(cos(i + k)))) + S);
	}
	cout << P << endl;
	system("pause");
	return 0;
}
