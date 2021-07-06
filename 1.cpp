#include <iostream>
using namespace std;
class Figure
{
public:
	virtual double area()
	{
		return 0;
	}
	Figure(double side) : F_side(side) {}

protected:
	double F_side;
};

class Parallelogram : public Figure
{
public:
	Parallelogram(double side, double height) : Figure (side), P_height(height) {}
	double area() override
	{
		return F_side * P_height;
	}

private:
	double P_height;
};

class Rectangle : public Figure
{
public:
	Rectangle(double side, double width) : Figure(side), P_width(width) {}
	double area() override
	{
		return F_side * P_width;
	}

private:
	double P_width;
};

class Square : public Figure
{
public:
	Square(double side) : Figure(side) {}
	double area() override
	{
		return F_side * F_side;
	}
};

class Rhombus : public Figure
{
public:
	Rhombus(double side, double height) : Figure(side), P_height(height) {}
	double area() override
	{
		return F_side * P_height;
	}

private:
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