// Напишите функтор, который удваивает каждый элемент вектора.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct geminate {
	int operator()(int a) {
		return a * 2;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	vector<int> vec{ 5, 8, 2, 32, 9, 154, 1001, 1 };

	cout << "Вывод элементов массива:\n";
	for (int i : vec) {
		cout << i << ' ';
	}

	transform(vec.begin(), vec.end(), vec.begin(), geminate());

	cout << "\n\nВывод удвоенных элементов массива:\n";
	for (int i : vec) {
		cout << i << ' ';
	}
	cout << endl;
}