#include "Interduce.h"
#include "copy_test.h"
#include "friend_test.h"
#include "Package_test.h"
#include "inherit_test.h"

int main(int argc, char const *argv[])
{
    // Person xioaming = {17,"Chean",'M'};
    // teacher Li = {38,"Mrs.Li",'F'};

    // xioaming.interduce();

    // Li.makeinterduce(xioaming);

    // Li.self_interduce();


    // Matser xiaoming = Matser("xiaoming",17,cat("xiaobai",5));

    // Matser xiaohei = xiaoming;
    // self chean = self(21,"chean",'M');

    // stu gouba = stu(); 
    // gouba.chean = new self(21,"chean",'M');

    // gouba.get_my_inf();

    // delete gouba.chean;

    // std::cout<<"1"<<std::endl;
    
    // Room myroom = Room("workroom","bedroom");

    // get_room(myroom);

    // mathist Li = mathist(711,"chean",'M');

    // int dist = Li.caltuate_distance(12,0);

    // std::cout<<"dist: "<<dist<<std::endl;

    // Li.get_inf();
    
    dog xiaohei = dog("xioahei",'M',4,7890,"BLACK DOG");

    xiaohei.go_sleep();

    xiaohei.play_fun();

    return 0;
}
