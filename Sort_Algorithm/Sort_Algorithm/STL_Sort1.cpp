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
		Student("�� �� �� ", 50),
		Student("�� �� �� ", 95),
		Student("�� â �� ", 100),
		Student("�� �� �� ", 80),
		Student("�� �� �� ", 21),
		Student("�� �� �� ", 60),
	};
	sort(students, students + 5);

	for (int i = 0; i < 5; i++) {
		cout << students[i].name << endl;
	}
}*/