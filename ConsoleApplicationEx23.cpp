#include <iostream>
#include <string>
using namespace std;
 bool proverka(char s1[]) {
	string s;
	for (int n = 0; n < 20; n++) {
			if (isdigit(s1[n])) {
				s += s1[n];
			}
			else
			if (isalpha(s1[n])) {
				toupper(s1[n]);
					s += s1[n];
			}
	}
	int len = s.length();
	if (len ==  0) return false ;
	for (int i = 0; i <= len / 2; i++) {
		if (s[i] != s[len - i - 1]) return false;
	}
	return true; 
}
int main() {
	setlocale(LC_ALL, "Russian");
	char s1 [21];
	cout << "Введите проверяемую строку";
	cin.getline(s1, 21);
	if (proverka(s1)) {
		cout << "Палиндром";
	}else  cout << "Не палиндром";
	return 0;
}
