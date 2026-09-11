#include "friend_test.h"

void get_room(Room obj)
{
    std::cout<<obj.room1<<" and "<<obj.room2<<std::endl;
}

Room::Room(std::string room1, std::string room2)
{
    this->room1 = room1;
    this->room2 = room2;
}

self::self(int age,std::string name,char gender)
{
    this->age = age;
    this->name = name;
    this->gender = gender;
}

self::~self()
{
    std::cout<<"complate !!!!\n"<<std::endl;
}

void self::Goto_bed()
{
    std::cout<<this->name<<"should go to bed"<<std::endl;
}

void self::Play_game()
{
    std::cout<<this->name<<"should play games"<<std::endl;
}

void self::Programming()
{
    std::cout<<this->name<<"should programming"<<std::endl;
}

void stu::get_my_inf()
{
    std::cout<<"name :"<<chean->name<<std::endl;
    std::cout<<"age :"<<chean->age<<std::endl;
    std::cout<<"gender :"<<chean->gender<<std::endl;

    chean->Goto_bed();
    chean->Play_game();
    chean->Programming();
}
