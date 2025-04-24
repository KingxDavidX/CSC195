#include <iostream>
#include "Point.h"

using namespace ost;
using namespace std;

//operator overloads outside a class just requires the left-hand side & right-hand side
//of the symbol as parameter
//LHS is the instance that we are in right now
//Point& operator + (Point& p1, Point p2)
//{
//	Point point;
//
//	point.x = p1.x += p2.x;
//	point.y = p1.y += p2.y;
//	return point;
//}

//void operator << (ostream& ostream, Point& point)
//{
//	ostream << point.x << " : " << point.y << endl;
//}

int main()
{
	Point point1(10,14);
	point1.Write(cout);
	

	Point point2(5, 8);

	//point1.Add(point2); --- intead of method call
	Point point3 = (point1 + point2) * 3.0f;	//syntactical sugar, gives operator

	//point3.Write(cout);
	cout << point3 << point2;

}
