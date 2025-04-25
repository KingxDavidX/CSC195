#pragma once
#include <iostream>

namespace mathlib
{
	template <typename T = int>
	class Fraction
	{
	public:
		Fraction() : numerator(0), denominator(1) {}

		Fraction(T num, T denom)
		{
			if (denom == 0)
				throw std::invalid_argument("Denominator cannot be zero.");
			numerator = num;
			denominator = denom;
			simplify();
		}

		int getNumerator() const { return numerator; }
		int getDenominator() const { return denominator; }

		void simplify()
		{
			T gcdValue = gcd(numerator, denominator);
			numerator /= gcdValue;
			denominator /= gcdValue;

			if (denominator < 0)
			{
				numerator *= -1;
				denominator *= -1;
			}
		}

		double toDouble() const
		{
			return static_cast<double>(numerator) / denominator;
		}

		Fraction operator+(const Fraction& fraction) const
		{
			T num = numerator * fraction.denominator + fraction.numerator * denominator;
			T denom = denominator * fraction.denominator;
			return Fraction(num, denom);
		}

		Fraction operator-(const Fraction& fraction) const
		{
			T num = numerator * fraction.denominator - fraction.numerator * denominator;
			T denom = denominator * fraction.denominator;
			return Fraction(num, denom);
		}

		Fraction operator*(const Fraction& fraction) const
		{
			T num = numerator * fraction.numerator;
			T denom = denominator * fraction.denominator;
			return Fraction(num, denom);
		}

		Fraction operator/(const Fraction& fraction) const
		{
			if (fraction.numerator == 0)
				throw std::invalid_argument("Division by zero.");
			T num = numerator * fraction.denominator;
			T denom = denominator * fraction.numerator;
			return Fraction(num, denom);
		}

		bool operator==(const Fraction& fraction) const
		{
			return numerator * fraction.denominator == fraction.numerator * denominator;
		}

		bool operator!=(const Fraction& fraction) const
		{
			return !(*this == fraction);
		}

		bool operator<(const Fraction& fraction) const
		{
			return numerator * fraction.denominator < fraction.numerator * denominator;
		}

		bool operator>(const Fraction& fraction) const
		{
			return fraction < *this;
		}

		bool operator<=(const Fraction& fraction) const
		{
			return !(*this > fraction);
		}

		bool operator>=(const Fraction& fraction) const
		{
			return !(*this < fraction);
		}

		friend std::ostream& operator<<(std::ostream& ostream, const Fraction& fraction)
		{
			ostream << fraction.numerator << "/" << fraction.denominator;
			return ostream;
		}

		friend std::istream& operator>>(std::istream& istream, Fraction& fraction)
		{
			T num, denom;
			istream >> num >> denom;
			if (denom == 0)
			{
				istream.setstate(std::ios::failbit);
				std::cerr << "Invalid input: Denominator cannot be zero.\n";
			}
			else
			{
				fraction = Fraction(num, denom);
			}
			return istream;
		}
	private:
		T numerator, denominator;

		static T gcd(T num, T denom)
		{
			while (denom != 0)
			{
				T temp = denom;
				denom = num % denom;
				num = temp;
			}
			return (num < 0) ? -num : num;
		}
	};
}


