#include "copy_test.h"

Matser::Matser(const Matser &other)
{
    self_cat = new cat(*other.self_cat);
}

Matser::Matser()
{
    this->self_cat = new cat("Unname",-1);
    std::cout<<"class complate !!!"<<std::endl;
}

Matser::Matser(std::string name, int age,cat pet)
{
    this->name = name;
    this->age = age;
    this->self_cat = new cat(pet.name,pet.age);
    std::cout<<"Master is"<<" "<<name<<"age is "<<age<<std::endl;
    std::cout<<"cat name is "<<this->self_cat->name<<std::endl;
    std::cout<<"cat age is "<<this->self_cat->age<<std::endl;
}

Matser::~Matser()
{
    delete self_cat;
    if(self_cat != NULL)
    {
        self_cat = NULL;
    }
    std::cout<<"class end"<<std::endl;
}

cat::cat(std::string name,int age)
{
    this->name = name;
    this->age = age;
}
