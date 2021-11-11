#include <iostream>
#include "person.h"



  int main(){

      Person obj;
      Person obj1("name","surname",20);
      Person obj2 (obj1);
      Person obj3 ("anvanum","nmanmiban",55);
      obj1=obj3;
      std::cout<<obj1.get_name()<<obj1.get_surname()<<obj1.get_age();
  }