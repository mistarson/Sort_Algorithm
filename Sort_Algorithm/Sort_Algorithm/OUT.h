#pragma once
#include <iostream>

using namespace std;

void OUT(int *array) {
	for (int i = 0; i < 10; i++) {
		cout << array[i] << " ";
	}
}