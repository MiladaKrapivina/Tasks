#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите число" << endl;
	cin >> a;
	int A = 0;
	int temp;
	for (int i = 1; i <= a; i++) {
		temp = log(i) / log(2);
		if (i - pow(2, temp) == 0) A++;
	}

	cout << A;

	return 0;
}