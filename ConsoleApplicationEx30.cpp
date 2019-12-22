#include<iostream>
using namespace std;

bool proverka(char c, const char *arr, int len) {
	for (int i = 0; i < len; i++) {
		if (c == arr[i]) return true;
	}
	return false;
}

char* my_strtok(char* text, char* delim) {
	static int begin = 0;
	static int end = 0;
	static char* str = text;
	static int leng = 0;
	if (text != nullptr) {
		begin = 0;
		end = 0;
		str = text;
		int i = 0;
		while (text[i] != '\0') {
			i++;
			leng++; //длина текста
		}
	}
	while (proverka(str[begin], delim, strlen(delim)) && begin  < leng) {
		begin++;
		end++;
	}
	if (begin >= leng) {
		return 0; //завершение 
	}
	else {
		while (!proverka(str[end], delim, strlen(delim)) && end < leng) {
			end++;
		}
		int len = end - begin;
		char* res = new char[len + 1];
		for (int i = 0; i < len; i++) {
			res[i] = str[i + begin];
		}
		res[len] = '\0';
		end++;
		begin = end;
		return res;
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	char text[1000];
	char delim[10];
	int words=0;
	cout << "Введите текст" << endl;
	cin.getline (text,1000);
	cout << "Ведите разделители" << endl;
	cin.getline(delim,10);
	char* temp=my_strtok(text, delim);
	while (temp != nullptr) {
		cout << temp << endl;
		temp = my_strtok(nullptr, delim);
		words++;
	}
	cout << "Слов" << words;
	return 0;
}
