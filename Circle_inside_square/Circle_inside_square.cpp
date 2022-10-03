#include "Circle_inside_square.h"
#include "iostream"
using namespace std;

//методы окружности
Circle::Circle() {
	radius = 0;
}

Circle::Circle(double r) {
	radius = r;
}

Circle::Circle(const Circle& obj) {
	radius = obj.radius;
}

void Circle::Input() {
	cout << "Enter radius: ";
	cin >> radius;
}

void Circle::Print() {
	cout << "Radius: " << radius << endl;
}


//методы квадрата
Square::Square() {
	side = 0;
}

Square::Square(double s) {
	side = s;
}

Square::Square(const Square& obj) {
	side = obj.side;
}

void Square::Input() {
	cout << "Enter side length of a square: ";
	cin >> side;
}

void Square::Print() {
	cout << "Side length of a square: " << side << endl;
}


//методы вписанной окружности
Circle_inside::Circle_inside() {
	radius = 0;
	side = 0;
}

Circle_inside::Circle_inside(const Circle& obj1, const Square& obj2) :  Circle(radius), Square(side) {}

void Circle_inside::Check()
{
	double diam = 2 * radius;
	if (diam = side) {
		cout << "Circle inscribed." << endl << endl;
	}
	else {
		cout << "Circle NOT inscribed." << endl << endl;
	}
}