#include <iostream>
int main(){
    double a,b;
    std::cout<<"please enter temperature in celcius"<<std::endl;
    std::cin>>a;
    b=1.8*a+32;
    std::cout<<"the temperature in F is:"<<b<<std::endl;
}