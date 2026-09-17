#include "polymorphism_test.h"

void Animal::sleep()
{
   std::cout<<"Animal go to sleep"<<std::endl;
}

void Animal::shout()
{
    std::cout<<"Animal should shout"<<std::endl;
}

void Cat::sleep()
{
    std::cout<<"Cat should sleep"<<std::endl;
}

void Cat::shout()
{
    std::cout<<"Cat should shout"<<std::endl;
}

Cat::Cat(std::string name, int age)
{
    this->name = name;
    this->age = age;
    std::cout<<"name :"<<name<<std::endl;
    std::cout<<"age :"<<age<<std::endl;
}

Cat::~Cat()
{
    std::cout<<"cat stop"<<std::endl;
}

void Milk::sleep()
{
    std::cout<<"Milk should sleep"<<std::endl;
}

void Milk::shout()
{
    std::cout<<"Milk should shout"<<std::endl;
}

Milk::Milk(std::string name, int age)
{
    this->name = name;
    this->age = age;
    std::cout<<"name :"<<name<<std::endl;
    std::cout<<"age :"<<age<<std::endl;
}

Milk::~Milk()
{
    std::cout<<"Milk stop"<<std::endl;
}




