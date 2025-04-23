#include <iostream>
#include <vector>
#include "shape.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main() {
	vector<Shape*> shapes;

	Circle* c = new Circle(1.0f);
	c->SetRadius(3.0f);
	Rectangle* r = new Rectangle(4.0f, 5.0f);

	shapes.push_back(c);
	shapes.push_back(r);

	for (Shape* shape : shapes)
	{
		cout << "Area: " << shape->area() << endl;
		Circle* circle = dynamic_cast<Circle*>(shape);
		if (circle != nullptr) {
			cout << "Radius: " << circle->GetRadius() << endl;
		}
	}

	for (Shape* shape : shapes) {
		delete shape;
	}

	return 0;
};
