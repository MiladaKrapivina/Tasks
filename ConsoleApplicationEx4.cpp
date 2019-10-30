#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	{
		int a, b;
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
		int a, c, b;
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
	
		a = b;
		b = a;
		cout << "a=" << a;
		cout << "b=" << b;
		system("pause");
	}
	}
