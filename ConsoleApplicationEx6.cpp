/*Дано уравнение вида: a*x*x+b*x+c=0. Напишите программу вычисляющую действительные корни этого уравнения.
Параметры - любое вещественное число.
*/
#include <iostream>

using namespace std;
int main()
{
	double a, b, c, D,x1, x2, x;
	cout << "a=" ;
	cin >> a;
	cout << "b=" ;
	cin >>b;
	cout << "c=" ;
	cin >>c;

	D = b * b - 4 * a * c;
	x1 = (-b + sqrt (D))/2*a;
	x2= (-b - sqrt (D))/2*a;
	x = -b / 2 * a;
	setlocale(LC_ALL, "Russian");
	if (D < 0) cout << "Корней нет" << "\n";
	else;

	if (D==0) cout << "x=" << x << "\n";
	else

	{
		cout << "x1=" << x1 << "\n";
		cout << "x2=" << x2;
	}
	
	return 0;
}