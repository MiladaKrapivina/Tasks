#include <iostream>
#include <time.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int arr[10][8]{ 0 };
	int m, n, V;
	int N, M;
	do {
		m = rand() % 8;
		n = rand() % 10;
		arr[m][n] = 1;
		int i = 0;
		while (true){
			cout << "Введите значения" << endl;
			cin >> N >> M;
			int zn[5];
			bool povt = false;
			zn[i] = 10 * N + M;
			if (i > 0) {
				for (int j = 0; j < 2; j++) {
					if (zn[j] == zn[j + 1] || zn[j] == zn[j + 2]||zn[j] == zn[j + 3]  )
					{
						povt = true;
					}
				}
			}
			if(i == 4) {
				cout << "Попыток не осталось.Вы проиграли."<<endl;
				break;
			}
			if (N == n && M == m) {
				cout << "Вы угадали";
				break;
			}
			else if (N >= 10 || M >= 8) {
				cout << "Вы ввели недопустимые координаты ячейки" << endl;
				--i;
			}
			else if (povt) {
				cout << "Вы уже вводили эти координаты " << endl;
				--i;
			}
			else cout << "Неверные  координаты ";
			i++;
		}
		cout << " Хотите сыграть ещё? Нажмите 1, если да.   ";
		cin >> V;
	} while (V == 1);
	return 0;
}
