#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	{
		int a;
		double b;
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		a = a + b;
		b = a - b;
		a = a-b;
		cout << "a=" << a;
		cout << "b=" << b;
		system("pause");
	}

	{
		int a, c;
		double b;
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		c = a;
		a = b;
		b = c;
		cout << "a=" << a;
		cout << "b=" << b;
		system("pause");
	}
}
