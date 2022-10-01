#include <iostream>
#include <string>
#include <functional>
#include <clocale>
using namespace std;
#define len 3
// #9 - ���������� (���������������) ����������
// � �++ ����� ������������ ��������������� ����������, ����� ������� ����� �������� ������ ����������� � ������
// ������������� ��� ��� ���� ����������.

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
	// ����� ������� ��������������� ����� ������� ���-�� ���� "������������� ������", ������������ ��� ������ - ������ Point
	// (�������, ���� ��� �������� ������ ������� � ������ (third = first + second), ���������: ������ ������ Point.
	Point* operator + (Point* p2) { // �� ����� ��������� ����� operator ��������� ����� �������� ����� ��������������.
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