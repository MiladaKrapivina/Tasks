#include <iostream>
#include <clocale>
#include <time.h>
using namespace std;

double exponentiation(double a, int b, double result = 1)
{
	if (b == 0) {
		return result;
	}
	else if (b > 0) {
		result *= a;
		return exponentiation(a, b - 1, result);
	}
	else {
		result /= a;
		return exponentiation(a, b + 1, result);
	}
}



int main()
{
	setlocale(LC_ALL,"Russian");
	
		double a;
		int b;

		cin >> a;
		cin >> b;

		cout << exponentiation(a, b);

		

	return 0;
}




