#include <iostream>
#include <clocale>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a,res=1;
	int b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;

	if (a == 0)
	{
		if (b == 0)
		{
			cout << 1;
			return 0;
		}
		if (b > 0)
		{
			cout << 0;
			return 0;
		}
		if (b < 0)
		{
			cout << "Ошибка: делить на 0 нельзя";
			return 0;
		}
	}
	else
	{
		if (b > 0) {
			for (int i = 1; i <= b; i++) {
				res *= a;
            }
		}
		else {
			for (int i = 1; i <= -b; i++) {
				res /= a;
			}
		}
	}
	cout << res;
	return 0;
}




