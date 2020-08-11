/*
#include <iostream>

using namespace std;

void main() {
	int min = 0;
	int temp = 0;
	int index = 0;

	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };
	for (int i = 0; i < 10; i++) {
		min = array[i];
		index = i;
		for (int j = i + 1; j < 10; j++) {
			if (min > array[j]) {
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}

	for (int z = 0; z < 10; z++) {
		cout << array[z] << " ";
	}
}
*/