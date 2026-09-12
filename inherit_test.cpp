#include "inherit_test.h"

dog::dog(std::string name, char gender, int age, long long year, std::string char_c)
{
    this->age = age;
    this->charcater = char_c;
    this->gender = gender;
    this->name = name;
    this->year = year;
    std::cout<<"name: "<<this->name<<std::endl;
    std::cout<<"age: "<<this->age<<std::endl;
    std::cout<<"gender: "<<this->gender<<std::endl;
    std::cout<<"character: "<<this->charcater<<std::endl;
    std::cout<<"live year: "<<this->year<<std::endl;
}

void dog::go_sleep()
{
    std::cout<<"I want to sleep"<<std::endl;
}

void dog::play_fun()
{
    std::cout<<"I want to play fun"<<std::endl;
}

dog::~dog()
{
    std::cout<<"end"<<std::endl;
}
