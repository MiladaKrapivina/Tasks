#include <iostream>
#include <time.h>
using namespace std;
void swap(int*m, int*n) {
	int temp =*m;
	*m = *n;
	*n = temp;
}
int msort(int* m, int* n, int*k) {
	if (*m>*n)
	{
		swap(m, n);
	}
	if (*k <* n)
	{
		swap(k, n);
	}
	if (*m > * k)
	{
		swap(m, k);
	}
	return *k;
}
void info( int*d) {
	cout << "Адрес: "<<d <<"   "<<"значение  "<<*d<<endl ;
}

int* add(int*m , const int*n ) {
	*m = *m + *n;
	return m;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int a=1, b=2, c=3;
	int* ai = &a;
	int* bi = &b;
	int* ci = &c;
	info(ai);
	info(bi);
	info(ci);
	cout << "Максимуму  " << msort(ai, bi, ci)<<endl;
    cout <<"Адрес"<<add(add(ai, bi),ci)<<"  Значение "<<a;
}
