#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	srand( time(NULL));
	int b[20], max=-100, min=100;
	for (int i = 0; i < 20; i++) {
		b[i] =  rand() % 200 -100;
		cout << b[i] << " ";
		if (b[i]>=max)
		{
			max = b[i];
		}
		if (b[i]<=min){
			min = b[i];
		}
	}
	cout<<endl << "Max=" << max << endl << "Min=" << min;
	return 0;
}
