#pragma once

template<typename T = int>
class TemplateClass
{
public:
	TemplateClass() : x{0}, y{0} {}
	TemplateClass(T x, T y) : x{x}, y{y} {}
private:
	T x, y;

};

template<typename T, unsigned int size>
class Array
{
public:
	T& operator [] (unsigned int index)
	{
		return m_elements[index];
	}
private:
	T m_elements[size];
};
