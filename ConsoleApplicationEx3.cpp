
/* Задача № 3
Объявите в коде программы 2 переменные типа int.
Запросите значения для этих переменных у пользователя.
Для этой пары чисел рассчитайте и выведите на экран результат следующих действий : +, -, *, / ;
Повторите задание для пары переменных типа double, double, пары int, double и пары double, int .
Обратите внимание на разницу в поведении операторов + , -, *, / в зависимости от типа операндов.*/
#include <iostream>
#include<Windows.h>
using namespace std;
int main()
{	
	{
		int a, b;
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		cout << "a+b = " << a + b << "\n";
		cout << "a-b=" << a - b << "\n";
		cout << "a*b=" << a * b << "\n";
		cout << "a/b=" << a / b << "\n";
		system("pause");
	}
	{
		double a, b;
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		cout << "a+b = " << a + b << "\n";
		cout << "a-b=" << a - b << "\n";
		cout << "a*b=" << a * b << "\n";
		cout << "a/b=" << a / b << "\n";
		system("pause");
	}
	{double a;
	int b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "a+b = " << a + b << "\n";
	cout << "a-b=" << a - b << "\n";
	cout << "a*b=" << a * b << "\n";
	cout << "a/b=" << a / b << "\n";
	system("pause");
	}
	{
		int  a;
		double b;
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		cout << "a+b = " << a + b << "\n";
		cout << "a-b=" << a - b << "\n";
		cout << "a*b=" << a * b << "\n";
		cout << "a/b=" << a / b << "\n";
		system("pause");
	}
}








