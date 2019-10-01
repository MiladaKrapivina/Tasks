/*Дано уравнение вида: a*x*x+b*x+c=0. Напишите программу вычисляющую действительные корни этого уравнения.
Параметры - любое вещественное число.
*/
#include <iostream>

using namespace std;
int main()
{
	double a, b, c, D, x1, x2, x, x0;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;

	D = b * b - 4 * a * c;
	x1 = (-b + sqrt(D)) / (2 * a);
	x2 = (-b - sqrt(D)) / (2 * a);
	x = -b / (2 * a);
	x0 = -c / b;
	setlocale(LC_ALL, "Russian");
		if (a != 0)
		{
			if (D < 0) cout << "Корней нет" << "\n";
			

			if (D == 0) cout << "x=" << x << "\n";
			if(D>0)			{
				cout << "x1=" << x1 << "\n";
				cout << "x2=" << x2;
			}
			
		}
		else if(b!=0) cout << "x" << x;
		if (a == 0 && b == 0 && c == 0) cout << "Бесконечное множество решений";
		if (a == 0 && b == 0 && c != 0) cout << "Бред какой-то";
	return 0;
}