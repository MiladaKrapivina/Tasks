
#include <iostream>

using namespace std;

struct IntArray{
	int* data;
	int size;
};

/** Создаёт динамический массив размера size и сохраняет его в поле data переменной arr. 
Поле size структуры arr становится равным параметру size */

void create (IntArray* arr, int size) {
	arr->data = new int[size];
	arr->size = size;
}

/** Возвращает элемент массива с индексом index, при этом проверяет выход за границы массива. 
Если index лежит за пределами массива, вывести сообщение об ошибке и прервать работу программы */

int get (IntArray * arr, int index){
	if (index > arr->size||index<0) {
		cout << "Ошибка: выход за пределы массива";
		return 0;
	}
	return arr->data[index];
}

/** Изменяет значение элемента массива с индексом index на значение параметра value, 
при этом проверяет выход за границы массива. Если index лежит за пределами массива, 
вывести сообщение об ошибке и прервать работу программы */

void set(IntArray* arr, int index, int value) {
	if (index > arr->size||index<0) {
		cout << "Ошибка: выход за пределы массива";
		return;
	}
	arr->data[index] = value;
}
/** Выводит на экран содержимое массива в формате: [1, 2, 3] */

void print(IntArray* arr) {
	cout << "[";
	for (int i = 0; i < arr->size-1; i++) {
		cout << arr->data[i]<<", ";
	}
	cout <<arr->data[arr->size-1]<< "]";
}
/** Изменяет размер массива с сохранением элементов. Если новый размер меньше,
хвостовые элементы обрезаются, если больше, то дополнительные элементы инициализируются нулём */

void resize(IntArray* arr, int newSize) {
	if (newSize == arr->size) {
		cout << "Новый размер массива соответствует текущему.";
		return;
	}
	
	int* temp = new int[newSize + 1];
	
	for (int i = 0; i < (newSize>arr->size)? arr->size : newSize; i++) {
		temp[i] = arr->data[i];
	}

	if (newSize > arr->size) {
		for (int i = arr->size; i < newSize; i++) {
			arr->data[i] = 0;
		}
	}
	delete[] arr->data;
	arr->data = temp;
	arr->size = newSize;

	delete[] temp;
}

/** Освобождает память занятую массивом. Поле data становится равным nullptr, 
поле size становится равным нулю. Предусмотреть случай попытки удаления уже удалённого массива */

void free(IntArray* arr) {
	if (arr->data == 0x0) cout<< "Массив уже удален";
	delete[]arr->data;
	arr->data = nullptr;
	arr->size = 0;
}

void full(IntArray* arr) {
	for (int i = 0; i <=arr->size; i++) {
		arr->data[i] = i;
	}
}
int main()
{
	IntArray arr;
	create( &arr , 30);
	for (int i = 0; i < arr.size; i++) set(&arr, i, i);
	full(&arr);
	print(&arr);
	resize(&arr, 50);
	print(&arr);
	resize(&arr, 10);
	print(&arr);
	free(&arr);
	free(&arr);
	return 0;
}
