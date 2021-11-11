#include <regex>

class Utility{
    public:
    bool isInteger(std::string exp);
    bool isFloat  (std::string exp);
    bool isBoolean(std::string exp);
    bool isEmail  (std::string exp);
    bool isURL    (std::string exp);
    private:
    std::string exp;
};

bool Utility::isFloat(std::string exp){
    int pointcount=0;
    int count=0;
    int size=exp.length();
 if(exp[0]=='.' || exp[size-1]=='.'){
            return false;}

else{
    for(int i=0;i<size;++i){

        if( exp[i]=='0' ||exp[i]=='1' ||exp[i]=='2' ||exp[i]=='3' ||exp[i]=='4' ||exp[i]=='5' ||exp[i]=='6' ||exp[i]=='7' ||exp[i]=='8' ||exp[i]=='9' ){
              ++count;}

       
        if(exp[i]=='.'){
            pointcount++;}
            
    }
    
    if(pointcount==1 && count==size-1)
    {return true;}
}
  return false;



}

bool Utility::isInteger (std::string exp){
   int size=exp.length();
   int count=0;


if(exp[0]!='0'){

for(int i=0;i<size;++i){

        if( exp[i]=='0' ||exp[i]=='1' ||exp[i]=='2' || exp[i]=='3' || exp[i]=='4' ||exp[i]=='5' || exp[i]=='6' || exp[i]=='7' || exp[i]=='8' || exp[i]=='9' ){
            
        
             ++count;
        }
        
    }
    
    if(count==size)
    {return true;}
    return false;
}
  return false;
}

bool Utility::isURL (std::string exp){

     const std::regex pattern("^(http:\\/\\/www\\.|https:\\/\\/www\\.|http:\\/\\/|https:\\/\\/|www\\.)[a-z0-9]+([\\-\\.]{1}[a-z0-9]+)*\\.[a-z]{2,5}(:[0-9]{1,5})?(\\/.*)?$");
    return std::regex_match(exp,pattern);     

}

bool Utility::isEmail (std::string exp){
    const std::regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    return std::regex_match (exp,pattern);
    
}

bool Utility::isBoolean (std::string exp)
{
    if (exp=="true")
    {return true;}

    else if(exp=="false")
    {return true;}

    return false;
    
}
