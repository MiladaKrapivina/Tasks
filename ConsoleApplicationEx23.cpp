#include <iostream>
#include <string>
using namespace std;
bool flag=true;
void proverka(string s1) {
	string s;
	for (int n = 0; n < s1.length(); n++) {
	   if ((s1[n]>=48 && s1[n]<=57)|| (s1[n] >= 65 && s1[n] <= 90)|| (s1[n] >= 97 && s1[n] <=122)) {
		 if (s1[n] >= 48 && s1[n] <= 57) {
			s+=s1[n];
		 }else 
			if (s1[n] >= 65 && s1[n] <= 90) {
				s+=s1[n];
			}else s+=s1[n]-32;
	   }
    }
	int len = s.length();
	if (len == 0) { 
		flag = false; 
		return;
	}
	for (int i = 0; i <= len / 2; i++) {
		if (s[i] != s[len-i-1]) {
			flag = false;
		}
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	string s1;
	cout << "Введите проверяемую строку";
	cin>>  s1;
	proverka( s1);
	if (flag) {
		cout << "Палиндром";
	}
	else cout << "Не палиндром";
	
	return 0;
}
