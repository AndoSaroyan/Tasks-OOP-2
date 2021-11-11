#include <iostream>
#include "Utility.h"

int main(){
    Utility obj;
    std::string str;
    std::cin>>str;
    std::cout<<"Boolean:"<<obj.isBoolean(str)<<std::endl;
    std::cout<<"Email:"<<obj.isEmail(str)<<std::endl;
    std::cout<<"Float Number:"<<obj.isFloat(str)<<std::endl;
    std::cout<<"Integer Number:"<<obj.isInteger(str)<<std::endl;
    std::cout<<"URL:"<<obj.isURL(str)<<std::endl;
    
    return 0;
}











