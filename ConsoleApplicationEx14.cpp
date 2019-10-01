
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rassian");
	long long s, l1, r1, l2, r2 ,x1, x2;
	cin >> s >> l1 >> r1 >> l2 >> r2;
	 
	bool oko = false;
	if (l1>=r1||l2>=r2)
	{
		cout << "Заданный диапазон не удовлетворяет условию задачи";
		return 0;
	}
	for (int s1 = l1; s1 <= r1; s1++) {
		for (int s2 = l2; s2 <= r2;s2++) {
			if (s==s1+s2) {
				x1 =s1;
				x2 =s2;
				oko = true;
				break;
			}
			else if (s1+s2>s) break;
		}
		if (oko) break;
	}
	if (oko) cout << x1 << "  " << x2 << endl;
	else cout << "-1";
	return 0;

}

