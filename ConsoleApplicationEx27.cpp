#include<iostream>
#include<ctime>
using namespace std;

enum ItemType {
	Sword1,
	Spell1,
	Bow1
};
enum Element {
	Air,
	Water,
	Earth,
	Fire
};
struct Sword {
	int damage;
};

struct Spell {
	int damage;
	Element element;;
	double distance;
};

struct Bow {
	int damage;
	int charge_time; 
	double distance;
};

struct Item {
	ItemType item;
	union {
		Sword sword;
		Spell spell;
		Bow bow;
	};

};

Item getRandomItem() {
	Item result;
	result.item= static_cast <ItemType> (rand() % 3); 
	switch (result.item)	{
	case Sword1:
		result.sword.damage = rand() % 100;
		break;

	case Spell1:
		result.spell.damage = rand() % 100;
		result.spell.distance = rand() % 1000/10,0;
		result.spell.element = static_cast<Element> (rand() % 4);
		break;

	case Bow1:
		result.bow.damage = rand() % 100;
		result.bow.distance = rand() % 1000 / 10, 0;
		result.bow.charge_time = rand() % 100;
		break;
	}
	return result;
}

void printItem(Item loot) {
	switch (loot.item) {
	case Sword1:
		cout << "---SWORD---"<<endl;
		cout << "Damage: " << loot.sword.damage;
		break;

	case Spell1:
		cout << "---SPELL---"<<endl;
		cout << "Damage: " << loot.spell.damage<<endl;
		cout << "Element: ";
		switch (loot.spell.element) {
		case Air:
			cout << "AIR";
			break;
		case Earth:
			cout << "EATRH";
			break;
		case Water:
			cout << "WATER";
			break;
		case Fire:
			cout << "FIRE";
			break;
		}
		cout << endl;
		cout << "Distance: " << loot.spell.distance << endl;
		break;

	case Bow1:
		cout << "---BOW---"<<endl;
		cout << "Damage: "  << loot.bow.damage << endl;
		cout << "Charge time: " << loot.bow.charge_time << endl;
		cout << "Distance: " << loot.bow.distance << endl;
		break;
	}

}

int main() {
	srand(time(NULL));
	int i = 0;
	while (i < 5) {
		printItem(getRandomItem());
		cout << endl;
		i++;
	};
	return 0;
}
