#pragma once
#include "Shape.h"

class Circle: public Shape
{
public:
	Circle(float r) { m_radius = r; }
	~Circle() {}

	float area() override;

	void SetRadius(float radius) { m_radius = radius; }
	float GetRadius() { return m_radius; }
private:
	float m_radius;
};
