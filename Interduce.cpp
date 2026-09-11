#include "Interduce.h"

void Person::interduce()
{
    std::cout<<"I am "<<name<<std::endl;
    std::cout<<"age is"<<age<<",gender is "<<gender<<std::endl;
}

void teacher::makeinterduce(Person s)
{
    s.interduce();
}

void teacher::self_interduce()
{
    std::cout<<"I am "<<this->name<<" teahcer "<<std::endl;
    std::cout<<"age is"<<this->age<<",gender is "<<this->gender<<std::endl;
}
