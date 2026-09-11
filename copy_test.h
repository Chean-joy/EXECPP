#ifndef __COPY_TEST_H__
#define __COPY_TEST_H__

#include <iostream>
#include <string>

class cat{
public:
    int age;
    std:: string name;
    cat(std::string name,int age);
};

class Matser{
public:
    int age;
    std::string name;
    cat *self_cat;

    //deep copy 
    Matser(const Matser& other);

    Matser();
    Matser(std::string name,int age,cat pet);
    ~Matser();
};



#endif

