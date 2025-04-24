#include <iostream>
#include "TemplateClasss.h"

using namespace std;

namespace myMethod
{
	template<typename T, typename U>
	T max(T i1, U i2)
	{
		return (i1 > i2) ? i1 : i2;
	}
}

int main()
{
	cout << myMethod::max(6, 6.56f) << endl;

	TemplateClass<int> tp1;
	TemplateClass<float> tp2;

	TemplateClass<> tp3;

	Array<string, 5> strAr;

	strAr[2] = "Banana";
}