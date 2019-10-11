
#include <iostream>

using namespace std;

int fact(int a, int res = 1) {
	if (a == 1) return  res;
	else return fact(a - 1, res * a);

}

int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "a=";
	cin >> a;
	if (a >= 0) {
			cout << fact(a);
			return 0;
	}
	else
	{
		cout << "Ошибка : введите целое положительное число";
	}
	return 0;
}
