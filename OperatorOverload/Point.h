#pragma once
#include <iostream>
//its possible class name is similar to built-in classes
//use namespace wrappers to identify 

namespace ost
{
	class Point
	{
	public:
		float x, y;

	public:
		//Point() { x = 0; y = 0; } // traditional way
		Point() : x{ 0 }, y{ 0 } {} //modern way
		Point(float x, float y) : x{x}, y{y} {}
		void Write(std::ostream& ostream);

		void Add(Point& point);

		Point& operator + (Point p);
		Point operator * (float s);
	};

}


