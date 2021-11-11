class Person {

    public:
    Person (){};
    Person (Person & oth){this->age=oth.age;this->surname=oth.surname; this->name=oth.name;}
    Person operator= (Person& oth){this->age=oth.age;this->name=oth.name;this->surname=oth.surname; return *this;}
    Person (std::string a,std::string b,int c){this->name=a;this->surname=b;this->age=c;}
    void set_name();
    void set_surname();
    void set_age();
    int get_age();
    std::string get_name();
    std::string get_surname();
    private:
    std::string name;
    std::string surname;
    int age;

};

       
      
       void  Person::set_name(){
           std::string str;
           std::cin>>str;
           name=str;       
            }

       void Person::set_surname(){
           std::string sur;
           std::cin>>sur;
           surname=sur;
       }

      void Person::set_age(){
          int num;
          std::cin>>num;
          age=num;
      }     

      int Person::get_age(){
          return age;
      } 
      
      std::string Person::get_name(){
          return name;
      }

     std::string Person::get_surname(){
         return surname;
     }