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
	double area() override
	{
	}

private:
	double F_base;
	double P_height;
};

class Rectangle : public Figure
{
public:
	double area() override
	{
	}

private:
	double F_length;
	double P_width;
};

class Square : public Figure
{
public:
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
	double area() override
	{
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