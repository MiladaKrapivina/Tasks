﻿// ConsoleApplicatioEx5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

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











// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
