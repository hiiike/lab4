// Lab_03_4.cpp
// Кульба Андрый
// Лабораторна робота № 4.3
//Табуляція функції, заданої формулою: функція з параметрами
// Варіант 17


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, F, a, b, c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << fixed;
	cout << "------------" << endl;
	cout << "|" << setw(10) << "x" << "|" << endl;
	cout << "------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x + 10 < 0 && b != 0)
			F = a * (x * x) - c * x + b;
		else
			if (x + 10 > 0 && b == 0)
				F = (x - a) / (x - c);
			else
				F = -x / (a - c);
		cout	<< "|" << setw(9) << setprecision(3) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "------------" << endl;
	return 0;
}
