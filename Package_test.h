#ifndef __PACKAGE_TEST_H__
#define __PACKAGE_TEST_H__

#include <iostream>
#include <string>

class mathist
{
private:
    int id;
    std::string name;
    char gender;
public:
    mathist(int id,std::string name,char gender);
    int caltuate_distance(int addr1,int addr2);
    void get_inf()const;
    ~mathist();
};

#endif

