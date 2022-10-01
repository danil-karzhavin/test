#include <iostream>
#include <string>
#include <functional>
#include <clocale>
using namespace std;
#define len 3
// #9 - ѕерегрузка (переопределение) операторов
// ¬ с++ можно использовать переопределение операторов, чтобы указать какие действи€ должны происходить в момент
// использовани€ тех или иных операторов.

class Point {
private:
	int x, y;
public:
	Point() {};
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}

	int get_x() {
		return x;
	}
	int get_y() {
		return y;
	}
	// „тобы указать переопределение нужно создать что-то типо "страндартного метода", возвращаемый тип метода - объект Point
	// (логично, ведь при сложении одного объекта с другим (third = first + second), результат: объект класса Point.
	Point* operator + (Point* p2) { // за счето ключевого слова operator указываем какой оператор будем переопредел€ть.
		return &Point((x + p2->x), (y + p2->y));
	}
};
int main() {
	setlocale(LC_ALL, "rus");
	Point* first = new Point(6, 7);
	Point* second = new Point(7, 4);

	Point* third = new Point;
	*third = *first + *second; // 
}