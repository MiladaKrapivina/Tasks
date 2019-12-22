#include<iostream>
using namespace std;

int main(int argc, char* argv[]) {

	for (int i = 0; i < argc; i++) {
		if (!strcmp("-help", argv[i])) {
			cout << "flags -n -b -w" << endl;
			return 0;
		}
	}
	bool n = false, b = false, w = false;
	char* name=0;
	char* rename=0;
	for (int i = 0; i < argc; i++) {
		if (!strcmp("-n", argv[i])) {
			if (i != argc - 1) {
				n = true;
				name = argv[++i];
			}
			else {
				cout << "ошибка" << endl;
				return 1;
			}
		}
		if (!strcmp("-b", argv[i])) {
			b = true;
		}
		if (i != argc - 1) {
			w = true;
			rename = argv[++i];
		}
	}
	if (n || w) {
		cout << (b ? "Пока " : "Привет ") << (w ? rename : name) << endl;
	}
	return 0;
}
