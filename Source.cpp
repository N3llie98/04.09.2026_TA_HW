#include <iostream>
using namespace std;

void pointsToECTS(int points)
{
	if (points > 100 || points < 0) {
		cout << "ERROR: бали не можуть бути бiльшими за 100 чи меншими за 0.";
	}
	else if (points >= 90) {
		cout << "Оцiнка ECTS: A\nРезультат: Вiдмiнно";
	}
	else if (points >= 82) {
		cout << "Оцiнка ECTS: B\nРезультат: Дуже добре";
	}
	else if (points >= 75) {
		cout << "Оцiнка ECTS: C\nРезультат: Добре";
	}
	else if (points >= 69) {
		cout << "Оцiнка ECTS: D\nРезультат: Задовiльно";
	}
	else if (points >= 60) {
		cout << "Оцiнка ECTS: E\nРезультат: Достатньо";
	}
	else if (points >= 35) {
		cout << "Оцiнка ECTS: FX\nРезультат: Незадовiльно, але можливе повторне складання";
	}
	else {
		cout << "Оцiнка ECTS: F\nРезультат: Незадовiльно";
	}
}

int main()
{
	setlocale(LC_ALL, "");
	int points;
	cout << "Введiть бали: ";
	cin >> points;
	pointsToECTS(points);
	return 0;
}