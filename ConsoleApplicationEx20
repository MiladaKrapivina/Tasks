//Пузырек
#include <iostream>
using namespace std;
void buble(int size, int *mas) {
	for(int i=size;i>=0;i--){
		for (int j = 0; j <i-1; j++) {
			if (mas[j] > mas[j + 1]) {
				swap(mas[j], mas[j + 1]);
			} 
		}//меньший на месте
    }
}
int main()
{
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	buble(n, a);
	for (int i = 0; i < n; i++) cout<< a[i]<<" "; ;
	delete[] a;
	return 0;
}
