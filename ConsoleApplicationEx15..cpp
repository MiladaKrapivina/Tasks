#include <iostream>
#include <time.h>
#include <vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int size;
	cout << "Введите значения" << endl;
	cin >> size;
	vector <int> x;
	x.resize(size);
	for (int i = 0; i < size; i++) {
		cin >> x[i];
		if (i > 0) {
			for (int j = 0; j < i - 1; j++) {
				if (x[j] > x[j + 1]) {
					swap(x[j], x[j + 1]);
				}
			}
			// сортировка первых 5 сигналов
		}
		for (int k = i; k >= 0; k--) {// вывод
				if (k >= 5) k = 4;
				cout << x[k];
		}
	    cout << endl;
	}
	return 0;
}
