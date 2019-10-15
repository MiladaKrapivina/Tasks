#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите число" << endl;
	cin >> a;
	int A ;
	
	A = log(a) / log(2) +1;
	cout << A;

	return 0;
}
