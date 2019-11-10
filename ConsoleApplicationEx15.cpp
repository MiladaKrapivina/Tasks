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
	}
	for (int i = size; i >= 0; i--) {
		for (int j = 0; j < i - 1; j++) {
			if (x[j] > x[j + 1]) {
				swap(x[j], x[j + 1]);
			}
		}
	}
	for (int j = 0; j < size; j++) {
		for (int k = j; k >= 0; k--) { 
			if (k >= 5) k=4;
			cout << x[k]; 
		}
		cout << endl;
	}
	return 0;
}
