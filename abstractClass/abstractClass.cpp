//Реализовать иерархию классов "Транспортное средство".
//В абстрактном базовом классе реализовать набор чисто виртуальных методов
// (ввод - вывод, расход топлива, получение стоимости, установка стоимости,
//  грузоподъёмность, количество мест для пассажиров).Потомки переопределяют чисто виртуальные методы.
//Создать массив указателей базового класса.Каждый элемент указывает на объект потомка.
// Поочерёдно вызывая методы в переборном цикле, освобождаем память.
#include <iostream>
#include <string>
using namespace std;

class Transport {
protected:
    string model;
    double consumption;
    double cost;
    double cargoCapacity;
    int passengerCapacity;

    void setParameters() {
        cout << "Enter model:";
        cin >> model;

        cout << "Enter consumption: ";
        cin >> consumption;

        cout << "Enter cost: ";
        cin >> cost;

        cout << "Enter cargo capacity: ";
        cin >> cargoCapacity;

        cout << "Enter passenger capacity: ";
        cin >> passengerCapacity;
    }

public:
    Transport(const string& m, double c, double cargoCap, int passCap)
        : model(m), consumption(c), cost(), cargoCapacity(cargoCap), passengerCapacity(passCap) {}

    virtual void Print() const = 0;
    virtual void getfuelConsumption() const = 0;
    virtual void getCost() const = 0;
    virtual void getCargoCapacity() const = 0;
    virtual void getPassengerCapacity() const = 0;
    virtual void input() = 0;
};



class Airplane : public Transport {
    double speed;

public:
    Airplane()
        : Transport("", 0, 0, 0), speed(0) {}

    Airplane(const string& m, double c, double cst, double cargoCap, int passCap, double s)
        : Transport(m, c, cargoCap, passCap), speed(s) {}

    void Print() const override {
        cout << "\nAirplane: \n";
        cout << "Airplane model: " << model << endl;
        cout << "Speed: " << speed << endl;
    }

    void input() override {
        cout << "\nAirplane:" << endl;
        Transport::setParameters();
        cout << "Enter speed of the airplane: ";
        cin >> speed;
    }

    void getCargoCapacity() const override {
        cout << "Cargo Capacity: " << cargoCapacity << endl;
    }

    void getPassengerCapacity() const override {
        cout << "Number of seats for passengers: " << passengerCapacity << endl;
    }

    void getfuelConsumption() const override {
        cout << "Fuel consumption of the airplane: " << consumption << endl;
    }

    void getCost() const override {
        cout << "Cost: " << cost << endl;
    }
};



class Ship : public Transport {
    double speed;

public:
    Ship(): Transport("", 0, 0, 0), speed(0) {}
    Ship(const string& m, double c, double cst, double cargoCap, int passCap, double s)
        : Transport(m, c, cargoCap, passCap), speed(s) {}

    void Print() const override {
        cout << "\nShip: \n";
        cout << "Ship model: " << model << endl;
        cout << "Speed: " << speed << endl;
    }

    void input() override {
        cout << "\nShip:" << endl;
        Transport::setParameters();
        cout << "Enter speed of the ship: ";
        cin >> speed;
    }

    void getCargoCapacity() const override {
        cout << "Cargo Capacity: " << cargoCapacity << endl;
    }

    void getPassengerCapacity() const override {
        cout << "Number of seats for passengers: " << passengerCapacity << endl;
    }

    void getfuelConsumption() const override {
        cout << "Fuel consumption of the ship: " << consumption << endl;
    }

    void getCost() const override {
        cout << "Cost: " << cost << endl;
    }
};




class Truck : public Transport {
    double numberOfWheels;

public:
    Truck() : Transport("", 0, 0, 0), numberOfWheels(0) {}
    Truck(const string& m, double c, double cst, double cargoCap, int passCap, double wheels)
        : Transport(m, c, cargoCap, passCap), numberOfWheels(wheels) {}

    void Print() const override {
        cout << "\nTruck: \n";
        cout << "Truck model: " << model << endl;
        cout << "Number Of Wheels: " << numberOfWheels << endl;
    }

    void input() override {
        cout << "\nTruck:" << endl;
        Transport::setParameters();
        cout << "Enter number of wheels the truck: ";
        cin >> numberOfWheels;
    }

    void getCargoCapacity() const override {
        cout << "Cargo Capacity: " << cargoCapacity << endl;
    }

    void getPassengerCapacity() const override {
        cout << "Number of seats for passengers: " << passengerCapacity << endl;
    }

    void getfuelConsumption() const override {
        cout << "Fuel consumption of the truck: " << consumption << endl;
    }

    void getCost() const override {
        cout << "Cost: " << cost << endl;
    }
};



class Bicycle : public Transport {
    double numberOfWheels;

public:
    Bicycle() : Transport("", 0, 0, 0), numberOfWheels(0) {}
    Bicycle(const string& m, double c, double cst, double cargoCap, int passCap, double wheels)
        : Transport(m, c, cargoCap, passCap), numberOfWheels(wheels) {}

    void Print() const override {
        cout << "\nBicycle: \n";
        cout << "Bicycle model: " << model << endl;
        cout << "Number Of Wheels: " << numberOfWheels << endl;
    }

    void input() override {
        cout << "\nBicycle:" << endl;
        Transport::setParameters();
        cout << "Enter number of wheels the Bicycle: ";
        cin >> numberOfWheels;
    }

    void getCargoCapacity() const override {
        cout << "Cargo Capacity: " << cargoCapacity << endl;
    }

    void getPassengerCapacity() const override {
        cout << "Number of seats for passengers: " << passengerCapacity << endl;
    }

    void getfuelConsumption() const override {
        cout << "Fuel consumption of the Bicycle: " << consumption << endl;
    }

    void getCost() const override {
        cout << "Cost: " << cost << endl;
    }
};



class Car : public Transport {
    double numberOfWheels;
    double speed;
public:
    Car() : Transport("", 0, 0, 0), numberOfWheels(0),speed(0) {}
    Car(const string& m, double c, double cst, double cargoCap, int passCap, double wheels,double s)
        : Transport(m, c, cargoCap, passCap), numberOfWheels(wheels), speed(s) {}

    void Print() const override {
        cout << "\nCar: \n";
        cout << "Car model: " << model << endl;
        cout << "Number Of Wheels: " << numberOfWheels << endl;
        cout << "Speed" << speed << endl;
    }

    void input() override {
        cout << "\nCar:" << endl;
        Transport::setParameters();
        cout << "Enter number of wheels the car: ";
        cin >> numberOfWheels;
    }

    void getCargoCapacity() const override {
        cout << "Cargo Capacity: " << cargoCapacity << endl;
    }

    void getPassengerCapacity() const override {
        cout << "Number of seats for passengers: " << passengerCapacity << endl;
    }

    void getfuelConsumption() const override {
        cout << "Fuel consumption of the car: " << consumption << endl;
    }

    void getCost() const override {
        cout << "Cost: " << cost << endl;
    }
};



int main() {

    Airplane airplane;
    Ship ship;
    Truck truck;
    Bicycle bicycle;
    Car car;

    Transport* transports[5] = { &airplane, &ship, &truck, &bicycle,&car};

    for (int k = 0; k < 5; k++) {
        transports[k]->input();
    }
    for (int k = 0; k < 5; k++) {
        transports[k]->Print();
        transports[k]->getCargoCapacity();
        transports[k]->getPassengerCapacity();
        transports[k]->getfuelConsumption();
        transports[k]->getCost();
    }

    return 0;
}

