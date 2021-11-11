#include <iostream>

struct Person{
    int age;
    std::string name;
    std::string surname;
};

void COPY(Person &obj,Person &other){
    obj.age=other.age;
    obj.name=other.name;
    obj.surname=other.surname;
    
}

void Param(Person obj,int m_age,std::string m_name,std::string m_surname){
    obj.name=m_name;
    obj.surname=m_surname;
    obj.age=m_age;
}

      void set_surname(Person &obj){
            std::string sur;
           std::cin>>sur;
           obj.surname=sur;
      }

       void set_name(Person &obj){
           std::string str;
           std::cin>>str;
           obj.name=str;       
            }

      void set_age(Person &obj){
          int num;
          std::cin>>num;
          obj.age=num;
      }     

      std::string get_surname(Person &obj){
          return obj.surname;
      }

      int  get_age(Person &obj){
          return obj.age;
      } 
      
      std::string  get_name(Person &obj){
          return obj.name;
      }


int main(){
  Person obj;
  std::cout<<"Enter Age:";
  set_age(obj);
  std::cout<<"Enter Name:";
  set_name(obj);
  std::cout<<"Enter Surname:";
  set_surname(obj);
 
  Person obj1;

  COPY(obj1,obj);

    std::cout<<get_name(obj1)<<std::endl;
    std::cout<<get_surname(obj1)<<std::endl;
    std::cout<<get_age(obj1)<<std::endl;
}