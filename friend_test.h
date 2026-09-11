#ifndef __FRIEND_TEST_H__
#define __FRIEND_TEST_H__

#include <iostream>
#include <string>

class Room{
private:
    std::string room1;
    std::string room2;

friend void get_room(Room obj);
public:
    Room(std::string room1,std::string room2);

};

class self;

class stu{
public:
    self*chean;
    void get_my_inf();
};

class self{
private:
    int age;
    std::string name;
    char gender;
public:
    self(int age,std::string name,char gender);

    ~self();
private:
    void Goto_bed();
    void Play_game();
    void Programming();
    friend void stu::get_my_inf();
};


#endif

