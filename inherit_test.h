#ifndef __INHERIT_H__
#define __INHERIT_H__

#include <iostream>
#include <string>

class Animal  
{
public:
    long long year;
    std::string charcater;
};

class dog:public Animal
{
public:
    std::string name;
    char gender;
    int age;
    dog(std::string name,char gender,int age,
        long long year,std::string char_c);
    void go_sleep();
    void play_fun();
    ~dog();
};

#endif


