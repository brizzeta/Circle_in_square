#pragma once
class Circle  //����������
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

class Square  //�������
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

class Circle_inside : public Circle, public Square  //���������� ��������� � �������
{
public:
	Circle_inside();
	Circle_inside(const Circle& obj1, const Square& obj2);
	void Check();
};