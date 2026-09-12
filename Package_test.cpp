#include "Package_test.h"

mathist::mathist(int id, std::string name, char gender)
{
    this->id = id;
    this->name = name;
    this->gender = gender;

    std::cout<<"object create complate"<<std::endl;
}

int mathist::caltuate_distance(int addr1, int addr2)
{   
    return (int)(addr1 - addr2);
}

void mathist::get_inf() const
{
    std::cout << "name: "<<this->name<<std::endl;
    std::cout << "id: "<<this->id<<std::endl;
    std::cout << "gender: "<<this->gender<<std::endl;
}

mathist::~mathist()
{
    std::cout<<"delete object"<<std::endl;
}


