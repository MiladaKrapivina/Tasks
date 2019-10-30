#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i;
	cout << "Введите проверяемое число" << endl;
	cin >> n;
	for (i = 2; i < sqrt(n); i++) {
		if (n % i == 0) {
			cout << "Данное число не является простым";
			return 0;
		}
	}
	cout << "Данное число  является простым";
	return 0;
}
