#include <iostream>
using namespace std;

int main()
{
	double a, b;
	char d;

	setlocale(LC_ALL, "Russian");
	cout << "Введите данные";
	cin >> a >> d >> b;
	switch (d)
	{
	case'+':
		cout << a + b;
		break;
	case'-':
		cout << a - b;
		break;
	case'*':
		cout << a * b;
		break;
	case '/':
		if (b==0)
		{
			cout << "Некорретные данные деление на 0 невозможно";
		}
		else
		{
			cout << a / b;
		}
		break;
	default:
		cout<<"Некорретные данные, уточните арифметическое действие";
		break;
	}

	return 0;	
}
