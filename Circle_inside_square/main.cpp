#include "Circle_inside_square.h"

int main() {
	Circle obj1(2);
	Square obj2(4);
	Circle_inside obj3(obj1, obj2);
	obj3.Check();
}