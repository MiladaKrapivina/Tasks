
#include <iostream>
#include <time.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int m, n, V;
	int N, M;
	do {
		int arr[10][8]{ 0 };
		n = rand() % 8;
		m = rand() % 10;
		arr[m][n] = 1;
		int i = 0;
		while (true) {
			cout << "Введите значения" << endl;
			cin >> N >> M;

			if (i == 4) {
				cout << "Попыток не осталось.Вы проиграли." << endl;
				break;
			}
			if (arr[M][N] == 1) {
				cout << "Вы угадали";
				break;
			}
			else if (N >= 10 || M >= 8 || N < 0 || M < 0) {
				cout << "Вы ввели недопустимые координаты ячейки" << endl;
				
			}
			else if (arr[M][N] == 2) {
				cout << "Вы уже вводили эти координаты " << endl;
				
			}
			else {
				cout << "Неверные  координаты ";
				arr[M][N] = 2;
				i++;
			}
		}
		cout << " Хотите сыграть ещё? Нажмите 1, если да.   ";
		cin >> V;
	} while (V == 1);
	return 0;
}
