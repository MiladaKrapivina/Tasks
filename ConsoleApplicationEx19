#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	srand( time(NULL));
	int n, sum=0;
	cin >> n;
	int* a = new int[n];//создание динамического массива
	for (int i=0 ; i < n; i++) {
		a[i] = rand() % 9;
		cout << a[i] << " ";
	}// заполнение массива
	for (int k = 0; k < 9; k++)//проверка значений от 0 до 9
	{
		k;
		for (int j = 0; j < n; j++) {
			if (k == a[j]) {
				sum++;
			}//подсчет количества выпаданий числа k в массиве
		}
		if (sum!=0)// вывод только тех k которые встречаются в массиве
		{
			cout << endl << k<< ":" << sum;
		}
		sum = 0;//обнуление количества попаданий для следующего числа
    }
	delete[] a;
	return 0;
}
