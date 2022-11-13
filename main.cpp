#include <iostream>
#include <cCar.h>

int carFunction();

int main(int argc, char const *argv[])
{
    std::cout << "start program" << std::endl;
    carFunction();
    std::cout << "carFunction was completed" << std::endl;

    cCar Car(10);
    std::cout << "car id is: " << Car.getId() << std::endl;

    return 0;
}

int carFunction()
{
    cCar Car(20); // this car is created on the
    std::cout << "cCar 20 was created inside car Function" << std::endl;
    return 0;
}