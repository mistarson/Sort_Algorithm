/*#include <iostream>

using namespace std;

void main() {
	int num = 0;
	int array[4];
	int min = 0;
	int index = 0;
	int temp = 0;

	cin >> num;

	array[3] = num / 1000;
	array[2] = (num % 1000) / 100;
	array[1] = (num % 100) / 10;
	array[0] = (num % 10) / 1;

	for (int i = 0; i < 4; i++) {
		min = array[i];
		index = i;
		for (int j = i; j < 4; j++) {
			if (min < array[j]) {
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}

	for (int i = 0; i < 4; i++) {
		cout << array[i];
	}

}*/