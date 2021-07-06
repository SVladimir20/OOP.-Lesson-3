#include <iostream>
using namespace std;
class Fraction
{
public:
	Fraction(double numerator, double denominator) : F_numerator(numerator), F_denominator(denominator) {}
	double GetNumerator() const
	{
		return F_numerator;
	}
	double GetDenominator() const
	{
		if (F_denominator == 0)
		{
			return -1;
		}
		return F_denominator;
	}
	double Number()
	{
		return GetNumerator() / GetDenominator();
	}
	Fraction operator+ (const Fraction f1)
	{
		Fraction overload(GetNumerator() * f1.GetDenominator() + GetDenominator() * f1.GetNumerator(), GetDenominator() * f1.GetDenominator());
		return overload;
	}
	Fraction operator- (const Fraction f1)
	{
		Fraction overload(GetNumerator() * f1.GetDenominator() - GetDenominator() * f1.GetNumerator(), GetDenominator() * f1.GetDenominator());
		return overload;
	}
	Fraction operator* (const Fraction f1)
	{
		Fraction overload(GetNumerator() * f1.GetNumerator(), GetDenominator() * f1.GetDenominator());
		return overload;
	}
	Fraction operator/ (const Fraction f1)
	{
		Fraction overload(GetNumerator() * f1.GetDenominator(), GetDenominator() * f1.GetNumerator());
		return overload;
	}
	Fraction operator- () const
	{
		return Fraction(-GetNumerator(), GetDenominator());
	}

private:
	double F_numerator{};
	double F_denominator{};
};

bool operator== (Fraction &f1, Fraction &f2)
{
	return f1.Number() == f2.Number();
}
bool operator!= (Fraction &f1, Fraction &f2)
{
	return f1.Number() != f2.Number();
}
bool operator< (Fraction &f1, Fraction &f2)
{
	return f1.Number() < f2.Number();
}
bool operator> (Fraction &f1, Fraction &f2)
{
	return f1.Number() > f2.Number();
}
bool operator<= (Fraction &f1, Fraction &f2)
{
	return f1.Number() <= f2.Number();
}
bool operator>= (Fraction &f1, Fraction &f2)
{
	return f1.Number() >= f2.Number();
}


int main()
{
	setlocale(LC_ALL, "Russian");
	Fraction f1(2, 3);
	Fraction f2(3, 4);
	Fraction fAddition = f1 + f2;
	Fraction fSubtraction = f1 - f2;
	Fraction fMultiplication = f1 * f2;
	Fraction fDivision = f1 / f2;
	Fraction fUnaryMinus = -f1;
	cout << "Сумма дробей: " << fAddition.GetNumerator() << "/" << fAddition.GetDenominator() << " = " << fAddition.Number() << endl;
	cout << "Разность дробей: " << fSubtraction.GetNumerator() << "/" << fSubtraction.GetDenominator() << " = " << fSubtraction.Number() << endl;
	cout << "Произведение дробей: " << fMultiplication.GetNumerator() << "/" << fMultiplication.GetDenominator() << " = " << fMultiplication.Number() << endl;
	cout << "Частное дробей: " << fDivision.GetNumerator() << "/" << fDivision.GetDenominator() << " = " << fDivision.Number() << endl;
	cout << "Унарный минус дроби: " << fUnaryMinus.GetNumerator() << "/" << fUnaryMinus.GetDenominator() << " = " << fUnaryMinus.Number() << endl;
	cout << f1.GetNumerator() << "/" << f1.GetDenominator() << " == " << f2.GetNumerator() << "/" << f2.GetDenominator() << " - " << boolalpha << (f1 == f2) << endl;
	cout << f1.GetNumerator() << "/" << f1.GetDenominator() << " != " << f2.GetNumerator() << "/" << f2.GetDenominator() << " - " << boolalpha << (f1 != f2) << endl;
	cout << f1.GetNumerator() << "/" << f1.GetDenominator() << " < " << f2.GetNumerator() << "/" << f2.GetDenominator() << " - " << boolalpha << (f1 < f2) << endl;
	cout << f1.GetNumerator() << "/" << f1.GetDenominator() << " > " << f2.GetNumerator() << "/" << f2.GetDenominator() << " - " << boolalpha << (f1 > f2) << endl;
	cout << f1.GetNumerator() << "/" << f1.GetDenominator() << " <= " << f2.GetNumerator() << "/" << f2.GetDenominator() << " - " << boolalpha << (f1 <= f2) << endl;
	cout << f1.GetNumerator() << "/" << f1.GetDenominator() << " >= " << f2.GetNumerator() << "/" << f2.GetDenominator() << " - " << boolalpha << (f1 >= f2) << endl;
	return 0;
}