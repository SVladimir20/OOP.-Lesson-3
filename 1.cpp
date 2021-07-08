#include <iostream>
using namespace std;
class Figure
{
public:
	virtual double area()
	{
		return 0;
	}
};

class Parallelogram : public Figure
{
public:
	Parallelogram(double base, double height) : F_base(base), P_height(height) {}
	double area() override
	{
		return F_base * P_height;
	}

private:
	double F_base;
	double P_height;
};

class Rectangle : public Figure
{
public:
	Rectangle(double length, double width) : F_length(length), P_width(width) {}
	double area() override
	{
		return F_length * P_width;
	}

private:
	double F_length;
	double P_width;
};

class Square : public Figure
{
public:
	Square(double side) : F_side(side) {}
	double area() override
	{
		return F_side * F_side;
	}
private:
	double F_side;
};

class Rhombus : public Figure
{
public:
	Rhombus(double base, double height) : F_base(base), P_height(height) {}
	double area() override
	{
		return F_base * P_height;
	}

private:
	double F_base;
	double P_height;
};

int main()
{
	Parallelogram parallelogram(14, 16);
	Rectangle rectangle(13, 24);
	Square square(15);
	Rhombus rhombus(18, 20);
	return 0;
}