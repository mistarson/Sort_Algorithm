/*
#include "OUT.h"
#include <algorithm>

class Student {
public:
	string name;
	int score;

	Student(string name1, int score1) {
		name = name1;
		score = score1;
	}
	bool operator < (Student& student) {
		return score < student.score;
	}
};
bool compare(int a, int b) {
	return a > b;
}

int main() {
	Student students[] = {
		Student("³ª µ¿ ºó ", 50),
		Student("ÀÌ Áö ÈÆ ", 95),
		Student("¼Õ Ã¢ Çö ", 100),
		Student("Àå Áö ¿õ ", 80),
		Student("±è Á¤ ÀÏ ", 21),
		Student("¹Ú Á¤ Èñ ", 60),
	};
	sort(students, students + 5);

	for (int i = 0; i < 5; i++) {
		cout << students[i].name << endl;
	}
}*/