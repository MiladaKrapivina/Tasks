#include <iostream>
#include <clocale>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Игра \"Угадай число\" " << endl;
	srand(time(NULL));
	int num, n, v;
	do {
		num = rand() % 101;
		int i = 0;
		bool flag = false;
		do {
			if (i == 5) {
				flag = true;
				cout << "Вы проиграли.Загаданное число:" << num;
				break;
			}
			cout << "Ваше число" << endl;
			cin >> n;
			if (n == num) {
				cout << "вы угадали!!!" << endl;
				break;
			}
			else if (n < num) {
				cout << "Загаданное число больше" << endl;
			}
			else {
				cout << "Загаданное число меньше" << endl;
			}
			i++;

		} while (!flag);
		cout<< " Хотите сыграть ещё? Нажмите 1, если да ";
		cin >> v;

	} while (v == 1);


	return 0;
}






