#include <iostream>
#include <vector>
using namespace std;
void factorization(int n) {
	vector <int> prost;
	int temp;
	
		for (int i = 2; i < n;) {
			if (n % i == 0) {
				prost.push_back(i);
				n = n / i;
			}
			else {
				i++;
			}
		}
		if (n > 1) {
			prost.push_back(n); 
		}
	

	for (int i = 0; i < prost.size(); i++) {
		cout << prost[i];
		temp = count(prost.begin(), prost.end(), prost[i]);
		if (temp != 1) {
			cout << "^" << temp;
			i += temp - 1;
			if (i != prost.size() - 1) cout << "*";
			continue;
		}
		else if (i != prost.size() - 1) cout << "*";
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите число";
	int n;
	cin >> n;
	if (n == 1) { cout << "Это число ни простое, ни составное"; 
	return 0;
	}
	else if (n<=0)
	{
		cout << "Это число не натуральное";
	} else	factorization(n);
	return 0;
}
