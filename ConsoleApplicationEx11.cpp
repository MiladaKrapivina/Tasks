// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Введите проверяемое число" << endl;
	cin >> n;
	for (i = 2; i < sqrt(n); i++) {
		if (n % i == 0) {
			cout << "Данное число не является простым";
			return 0;
		}
	}
	cout << "Данное число не является простым";
	return 0;
}