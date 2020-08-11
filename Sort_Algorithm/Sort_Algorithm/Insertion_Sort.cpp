/*
#include "OUT.h"

void main() {
	int temp = 0;
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };

	for (int i = 1; i < 10; i++) {
		for (int j = i; j >= 1; j--) {
			if (array[j] < array[j - 1]) {
				temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
			}
			else break;
		}
	}
	OUT(array);
}
*/