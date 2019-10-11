#include <iostream>
#include <clocale>
#include <time.h>
using namespace std;

double ex(double a, int b, double result = 1)
{
	if (b == 0) {
		return result;
	}
	else if (b > 0) {
		result *= a;
		return ex(a, b - 1, result);
	}
	else {
		result /= a;
		return ex(a, b + 1, result);
	}
}



int main()
{
	setlocale(LC_ALL, "Russian");

	double a;
	int b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;

	if (a==0)
	{
		if (b==0)
		{
			cout << "Неопределенно ";
			return 0;
		}
		if (b>0)
		{
			cout << 0;
			return 0;
		}
		if (b<0)
		{
			cout << "Ошибка: делить на 0 нельзя";
			return 0;
		}
	}
	else
	{
		cout << ex(a, b);
	}
	return 0;
}




