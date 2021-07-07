#include <iostream>
using namespace std;
class Car
{
public:
	Car(string company, string model) : C_company(company), C_model(model)
	{
		cout << "Car. ";
		cout << "��������: " << company << ", ������: " << model << endl;
	}

protected:
	string C_company;
	string C_model;
};

class PassengerCar : virtual public Car
{
public:
	PassengerCar(string company, string model) : Car(company, model)
	{
		cout << "PassengerCar. ";
		cout << "��������: " << company << ", ������: " << model << endl;
	}
};

class Bus : virtual public Car
{
public:
	Bus(string company, string model) : Car(company, model)
	{
		cout << "Bus. ";
		cout << "��������: " << company << ", ������: " << model << endl;
	}
};

class Minivan : public PassengerCar, public Bus
{
public:
	Minivan(string company, string model) : PassengerCar(company, model), Bus(company, model), Car(company, model)
	{
		cout << "Minivan. ";
		cout << "��������: " << company << ", ������: " << model << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Car car("BMW", "X6");
	PassengerCar passengerCar("Audi", "R8");
	Bus bus("���", "4234");
	Minivan minivan("Mercedes-Benz", "V-Class");
	return 0;
}