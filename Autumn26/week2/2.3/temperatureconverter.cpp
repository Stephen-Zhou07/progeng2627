#include <iostream>
#include <string>
int main(){
    double input,output;
    std::string unit;
    std::cout<<"please enter the temperature and unit"<<std::endl;
    std::cin>>input>>unit;
    if(unit =="F"){
        output= (input-32)/1.8;
        std::cout<<"the temperature is "<<output<<"C"<<std::endl;
    }
    else if (unit=="C"){
        output= input*1.8+32;
        std::cout<<"the temperature is"<<output<<"F"<<std::endl;
    }
    else{
        std::cout<<"error, unit not recognised"<<std::endl;
    }
}