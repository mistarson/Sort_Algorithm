/*
#include <iostream>

using namespace std;

void main() {
	int temp = 0;
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	for (int z = 0; z < 10; z++) {
		cout << array[z] << " ";
	}
}
*/