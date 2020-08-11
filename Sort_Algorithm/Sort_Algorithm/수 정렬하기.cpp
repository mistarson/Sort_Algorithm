/*
#include <iostream>

using namespace std;
void Quick_Sort(int start, int end, int* array) {
	int i = start + 1;
	int j = end;
	int key = start;
	int temp = 0;

	if (start >= end) {
		return;
	}
	while (i <= j) {
		while (array[key] >= array[i]) {
			i++;
		}
		while (array[key] <= array[j] && j > start) {
			j--;
		}
		if (i > j) {
			temp = array[j];
			array[j] = array[key];
			array[key] = temp;
		}
		else {
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
	Quick_Sort(start, j - 1, array);
	Quick_Sort(i, end, array);
}

void main() {
	int num = 0;
	int array[10000];


	cin >> num;

	for (int i = 0; i < 10; i++) {
		cin >> array[i];
	}
	cout << endl;

	Quick_Sort(0, num-1,array);
	for (int i = 0; i < num; i++) {
		cout << array[i] << endl;
	}
}
*/

