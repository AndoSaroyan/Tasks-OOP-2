#include <iostream>
#include "Point2D.h"


int main(){
    Point2D obj(10,20);
    Point2D obj1 (1,2);
    Point2D obj2=obj-obj1;
    Point2D obj3=obj*obj1;
    Point2D obj4=obj+obj1;
    Point2D obj5=obj/obj1;

    std::cout<<obj2.get_x()<<" " <<obj2.get_y()<<std::endl;
    std::cout<<obj3.get_x()<<" "<<obj3.get_y()<<std::endl;
    std::cout<<obj4.get_x()<<" "<<obj4.get_y()<<std::endl;
    std::cout<<obj5.get_x()<<" "<<obj5.get_y()<<std::endl;

}