#include <iostream>

using namespace std;

class Vehicle {
public:
    virtual void move() const {
        cout << "Vehicle is moving\n";
    }

    virtual ~Vehicle() = default;
};

class Airplane : public Vehicle {
public:
    void move() const override {
        cout << "Airplane flies in the sky\n";
    }
};

class Boat : public Vehicle {
public:
    void move() const override {
        cout << "Boat moves on water\n";
    }
};

int main() {
    Airplane airplane;
    Boat boat;

    airplane.move();
    boat.move();

    return 0;
}