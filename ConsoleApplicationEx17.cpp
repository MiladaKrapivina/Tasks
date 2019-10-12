/*В 19 веке была предложена несложная мера "относительной упитанности" тела человека.Она вычисляется на основании только роста и веса, и называется Индекс Массы Тела(Body Mass Index = BMI).Определяется она как вес делённый на рост в квадрате :

BMI = вес / рост ^ 2
Здесь вес берется в килограммах, а рост в метрах.

На основании этого показателя выделяют четыре категории :

Underweight - BMI < 18.5 (недостаточная масса)

	Normal weight - 18.5 <= BMI < 25.0 (норма)
	
	Overweight - 25.0 <= BMI < 30.0 (избыточная масса)

	Obesity - 30.0 <= BMI(ожирение)
	
Реализуйте две функции соответствующие прототипам :
 Возвращает индекс массы тела.  
double BMI(double weight, double height);

 Принимает численное значение ИМТ и печатает на экран соответствующую категорию
void printBMI(double BMI);

Формат ввода
В одной строке, через пробел указан вес в килограммах и рост в сантиметрах.Все значения гарантированно больше нуля.

Формат вывода
Ответ должен содержать одно из слов : Underweight, Normal, Overweight, Obesity.*/

#include <iostream>

using namespace std;
double BMI(double weight, double height) {
	double ind= weight / (height * height);
	return ind;
	}

void printBMI(double BMI) {
	if (BMI<18.5)
	{
		cout << "Underweight(недостаточная масса)";
	}
	if ((18.5 <= BMI)&&(BMI < 25.0))
	{
		cout << "Normal weight(норма)";
	}
	if ((25.0 <= BMI)&&(BMI < 30.0))
	{
		cout << "Overweight(избыточная масса)";
	}
	if (30.0 <= BMI)
	{
		cout << "Obesity(ожирение)";
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	double weight, height;
	cout << "Укажите вес в килограммах и рост в метрах";
	cin >> weight >> height;

	BMI( weight,  height);
	
	printBMI(BMI(weight, height));
	   	  
	return 0;
}
