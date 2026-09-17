#ifndef __POLYMORPHISM_TEST_H__
#define __POLYMORPHISM_TEST_H__

#include <iostream>
#include <string>

class Animal
{
public:
    virtual void sleep();
    virtual void shout();
};

class Cat: public Animal
{
private:
    std::string name;
    int age;
public:
    void sleep()override;
    void shout()override;
    Cat(std::string name,int age);
    ~Cat();
};

class Milk: public Animal
{
private:
    std::string name;
    int age;
public:
    void sleep()override;
    void shout()override;
    Milk(std::string name,int age);
    ~Milk();
};




#endif

