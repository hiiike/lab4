#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "R = "; cin >> R;
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if (y <= (sqrt(R * R - (x + R) * (x + R))) || y <= (-sqrt(R * R - (x - R) * (x - R))))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}	
	cout << endl << fixed;

		for (int i = 0; i < 10; i++)
		{
			x = -R + rand() * (2 * R) / RAND_MAX;
			y = -R + rand() * (2 * R) / RAND_MAX;
			if (y <= (sqrt(R * R - (x + R) * (x + R))) || y <= (-sqrt(R * R - (x - R) * (x - R))))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}