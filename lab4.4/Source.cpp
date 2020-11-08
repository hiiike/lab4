// Lab_03_4.cpp
// Кульба Андрій
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 17


#include  <iostream>
#include  <iomanip>
#include  <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, R, y;
	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "----------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -1 - R)
			y = 1;
		else
			if (-1 - R < x && x < -1)
				y = (-sqrt((R * R) - (x + 1) * (x + 1)));
			else
				if (-1 < x && x < 2)
					y = -R;
				else
					y = (-4 * R + R * x) / 2;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "----------------------" << endl;
	return 0;
}
