#include<iostream>
using namespace std;
size_t strlen(const char* string) {
	size_t size = 0;
	for (int i = 0; string[i] != '\0'; i++) {
		size++;
	}
	return size;
}
int strcmp(const char* string1, const char* string2) {
	size_t l1 = strlen(string1), l2 = strlen(string2);
	size_t m = (l1 <= l2) ? l1 : l2;
	for (int i = 0; i <= m; i++) {
		if (string1[i] != string2[i]) {
			return (string1[i] > string2[i]) ? 1 : -1;
		}
	return 0;
}

char* strstr_(char* string1, const char* string2) {

	size_t l1 = strlen(string1);
	size_t l2 = strlen(string2);
	int temp;
	for (int i = 0; i < l1; i++) {

		if (string1[i] == string2[0]) {
			temp = i + 1;
			int j;
			for (j = 1; j < l2; j++) {
				if (string1[temp] != string2[j])	break;
				temp++;
			}
			if (j == l2) return &string1[i];
		}
	}
	return nullptr;
}

char* strcat1(char* destptr, const char* srcptr) {
	size_t n = strlen(srcptr), m = strlen(destptr);
	for (int i = m, j = 0; i < m + n; i++, j++) {
		destptr[i] = srcptr[j];
	}
	destptr[m + n] = '\0';
	return destptr;
}
int main() {
	setlocale(LC_ALL, "Russian");
	char ll1[225], ll2[22];
	cin >> ll1;
	cin >> ll2;
	cout << strlen(ll1) << "  " << strlen(ll2);
	if (strcmp(ll1, ll2) < 0) cout << "Первая меньше";
	else if (strcmp(ll1, ll2) > 0) cout << "Первая больше";
	else cout << " Равны";
	
	if (!strstr_(ll1, ll2) == nullptr)
		cout << *strstr_(ll1, ll2) - ll1[0] - 1;
	else cout << -1;

    cout << strcat1(ll1, ll2);
	return 0;
}
