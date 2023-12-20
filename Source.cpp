
#include <iostream>

#include <clocale>

using namespace std;

int main() {

	setlocale(LC_ALL, "");

	int n, k, l;

	cout << "Введите значение n: ";

	cin >> n;

	cout << "Введите значение k: ";

	cin >> k;

	cout << "Введите значение l: ";

	cin >> l;

	int* arr = new int[n];

	cout << "Заполните массив: ";

	for (int i = 0; i < n; i++) {

		cin >> arr[i];

	}

	int sum = 0;

	for (int i = k; i <= l; i++) {

		sum += arr[i];

	}

	cout << "Сумма элементов массива с номерами от K до L включительно = " << sum << endl;

	return 0;

}