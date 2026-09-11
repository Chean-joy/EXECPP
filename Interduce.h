#ifndef __INTERDUCE_H__
#define __INTERDUCE_H__

#include <iostream>

class Person{
public:
    int age;
    char name[20];
    char gender;
    void interduce();
};

class teacher{
public:
    int age;
    char name[20];
    char gender;
    void makeinterduce(Person s);
    void self_interduce();
};


#endif

