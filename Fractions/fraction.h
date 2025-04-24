#pragma once
#include <iostream>

namespace mathlib
{
	class fraction
	{
	public:
		fraction(int x, int y)
		{
			numerator = x;
			setDenominator(y);
		}

	private:
		int numerator, denominator;
		void setDenominator(int x)
		{
			if (x <= 0)
			{
			std::cout << "Denominator cannot be zero\n";
			}
			else
			{
				denominator = x;
			}
		}
	};
}


