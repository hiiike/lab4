#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R, x0, y0, x1, y1;

	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "R = "; cin >> R;
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		x0 = R;
		y0 = 0;
		x1 = -R;
		y1 = 0;

		if (((x > 0 && x < R) && (y < 0 && y > -R) && ((x - x0) * (x - x0) + (-y0) * (y - y0) <= R * R)) ||
			(((x < 0 && x > -R) && (y > 0 && y < R)) && ((x - x1) * (x - x1) + (y - y1) * (y - y1))))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		x = R * 2 * rand() / RAND_MAX - R;
		y = R * 2 * rand() / RAND_MAX - R;

		if (((x > 0 && x < R) && (y < 0 && y > -R) && ((x - x0) * (x - x0) + (-y0) * (y - y0) <= R * R)) ||
			(((x < 0 && x > -R) && (y > 0 && y < R)) && ((x - x1) * (x - x1) + (y - y1) * (y - y1))))

			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	system("pause");
	return 0;
}
