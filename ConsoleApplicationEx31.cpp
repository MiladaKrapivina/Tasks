#include <iostream>
#include <string>
# include <queue> // очередь
# include <Vector>
using namespace std;
string maze[25] = {
"####B######################",
"# #       #   #      #    #",
"# # # ###### #### ####### #",
"# # # #       #   #       #",
"#   # # ######### # ##### #",
"# # # #   #       #     # #",
"### ### ### ############# #",
"# #   #     # #           #",
"# # #   ####### ###########",
"# # # #       # #         C",
"# # ##### ### # # ####### #",
"# # #     ### # #       # #",
"#   ##### ### # ######### #",
"######### ### #           #",
"# ####### ### #############",
"A           #   ###   #   #",
"# ############# ### # # # #",
"# ###       # # ### # # # #",
"# ######### # # ### # # # F",
"#       ### # #     # # # #",
"# ######### # ##### # # # #",
"# #######   #       #   # #",
"# ####### ######### #######",
"#         #########       #",
"#######E############D######"
};
vector<char> ex;

struct cor
{
	int x;
	int y;
};

auto check(int x, int y) {
	if (x < 0 || y < 0 || x>27 || y>24)return false;
	else if (maze[y][x] == '#') return false;
	else if (maze[y][x] == ' ') return true;
	else {
		ex.push_back(maze[y][x]);
		return false;
	}
}

cor help(int x, int y, cor *n) {
	cor N;
	N.x = x;
	N.y = y;
	return N;
}

void find_ex(queue<cor> *a) {
	
	if (!a->empty()) {
		cor s = a->front();   
		maze[s.y][s.x] = '#';
		if (check(s.x - 1, s.y)) a->push(help(s.x - 1, s.y, &s));
		if (check(s.x + 1, s.y)) a->push(help(s.x + 1, s.y, &s));
		if (check(s.x, s.y - 1)) a->push(help(s.x, s.y - 1, &s));
		if (check(s.x, s.y + 1)) a->push(help(s.x, s.y + 1, &s));
		a->pop();
		find_ex(a);
	}
	
}

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите координаты: ";
	int x, y;
	cin >> x >> y;

	if (x < 0 || y < 0 || x>27 || y>24) {
		cout << "Вы вышли за границы лабиринта.";
		return 0;
	}
	else if (maze[y][x] == '#') {
		cout << "Вы попали на стену";
		return 0;
	}
	else {
		queue <cor> step;
		cor s;
		s.x = x;
		s.y = y;
		step.push(s);
		
		find_ex(&step);
	}
	
	if (ex.empty()) cout << "Выходов нет";
	else {
		int n = 0;
		
		while (n != ex.size()) {
			cout << ex[n] << " ";
			++n;
		}
	}
	
	return 0;
}