#pragma once
class Circle  //окружность
{
protected:
	double radius;
public:
	Circle();
	Circle(double r);
	Circle(const Circle& obj);
	void Input();
	void Print();
};

class Square  //квадрат
{
protected:
	double side;
public:
	Square();
	Square(double s);
	Square(const Square& obj);
	void Input();
	void Print();
};

class Circle_inside : public Circle, public Square  //окрудность вписанная в квадрат
{
public:
	Circle_inside();
	Circle_inside(const Circle& obj1, const Square& obj2);
	void Check();
};