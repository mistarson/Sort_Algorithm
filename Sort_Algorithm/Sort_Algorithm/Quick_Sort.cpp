/*
#include "OUT.h"

void Quick_Sort(int start, int* array, int end) {
	int temp = 0;
	int key = start;
	int i = start + 1;
	int j = end;

	if (start >= end) { return; }
		while (i <= j) { //������ ������ �ݺ�
		while (array[key] >= array[i]) {//���������� �̵��ϸ鼭 Ű������ ū�� ã�� ���� �ݺ���
			i++;
		}
		while (array[key] <= array[j] && j>start) {//������ �������� �̵��ϸ鼭 Ű������ ���� �� ã�� ���� �ݺ���
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
	Quick_Sort(start, array,j-1);
	Quick_Sort(i, array, end);
}
void main() {
	int num = 0;
	int array[10000];
	

	cin >> num;

	for (int i = 0; i < 10; i++) {
		cin >> array[i];
	}
	cout << endl;

	Quick_Sort(0, array, num-1);
	for (int i = 0; i < num; i++) {
		cout << array[i] << " ";
	}
}*/