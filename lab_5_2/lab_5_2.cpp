// lab_5_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void S(const double x, const double eps, int& n, double& s);
void A(const double x, const int n, double& a);

int main()
{
	double xp, xk, x, dx, eps, s;
	int n = 0;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;

	if (fabs(xp) < 1 && fabs(xk) < 1) {

		cout << fixed;
		cout << "-------------------------------------------------" << endl;
		cout << "|" << setw(7) << "x" << "    |"
			<< setw(11) << "arcctg(x)" << "  |"
			<< setw(10) << "S" << "   |"
			<< setw(5) << "n" << "   |"
			<< endl;
		cout << "-------------------------------------------------" << endl;
		x = xp;

		while (x <= xk)
		{
			S(x, eps, n, s);

			cout << "|" << setw(10) << setprecision(2) << x << " |"
				<< setw(12) << setprecision(5) << atan(-x) + 4 * atan(1.0) / 2 << " |"
				<< setw(12) << setprecision(5) << s << " |"
				<< setw(7) << n << " |"
				<< endl;

			x += dx;
					
		}
		cout << "-------------------------------------------------" << endl;
	}
	else  cout << "NaN" << endl;
	cin.get();
	return 0;
}

void S(const double x, const double eps, int& n, double& s)
{
	n = 0; // вираз залежить від умови завдання варіанту
	double a = -x; // вираз залежить від умови завдання варіанту
	s = (4 * atan(1.0)) / 2 + a;
	do {
		n++;
		A(x, n, a);
		s += a;
	} while (abs(a) >= eps);
}

void A(const double x, const int n, double& a)
{
	double R = -((2 * n - 1) * pow(x, 2) / (2 * n + 1)); // вираз залежить від умови завдання варіанту
	a *= R;
}