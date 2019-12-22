#include<iostream>
using namespace std;
#include<stdlib.h>
struct Student {
	char name[101];
	int group;
	int sec[5];
};
void sort(Student* stud) {
	int size = 9;
		for (int i = size; i >= 0; i--) {
			for (int j = 0; j < i - 1; j++) {
				if (_strcmpi(stud[i].name, stud[j].name) < 0) {
					Student temp = stud[i];
					stud[i] = stud[j];
					stud[j] =temp;
				}
					
			}//меньший на месте
		}
	
}
int main() {
	setlocale(LC_ALL, "Russian");
	Student stud[10]{ {"PS1",1,{2,3,4,5,3}},{"XS2",2,{1,4,5,3,4}},{"AS3",1,{4,4,5,4,1}},{"FS1",2,{4,4,5,3,4}},{"BS1",1,{4,4,5,5,4}},{"FS2",2,{4,4,5,3,4}},{"ES2",1,{4,4,5,5,4}},{"ES1",2,{4,4,5,5,4}},{"ZS1",1,{4,4,5,5,4}},{"BS2",2,{2,4,5,5,4}} };
	sort(stud);
	for (int i = 0; i < 10; i++) {
	
		for (int j = 0; j < 5; j++)
			if (stud[i].sec[j] < 3) {
				cout << stud[i].name << "  " << stud[i].group<<endl;
		    }
	}
	return 0;
}
