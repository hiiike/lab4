#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double xp, xk, x, dx, ln, a = 0, R = 0, S = 0;
    int n = 0;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "ln = "; cin >> ln;
    cout << fixed;
    cout << "-----------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "log(x)" << " |"
        << setw(10) << "S" << " |"
        << setw(5) << "n" << " |"
        << endl;
    cout << "-----------------------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        n = 0;
        a = (((x * 1.0 - 1) / (x * 1.0)));
        S = a;
        do {
            n++;
            R = ((x * 1.0 - 1) * n * 1.0 * pow(x * 1.0, -1)) / (n * 1.0 + 1);
            a *= R;
            S += a;
        } while (abs(a) >= ln);
        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(10) << setprecision(5) << log(x) << " |"
            << setw(10) << setprecision(5) << S << " |"
            << setw(5) << n << " |"
            << endl;
        x += dx;
    }
    cout << "-----------------------------------------" << endl;
    return 0;
}