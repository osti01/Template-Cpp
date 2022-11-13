#include <iostream>
#include <cCar.h>

cCar::cCar(int id) : id(id)
{
    // cCar::id = id;
}

int cCar::getId()
{
    return cCar::id;
}

cCar::~cCar()
{
    std::cout << "cCar : " << cCar::id << " object was deleted" << std::endl;
}