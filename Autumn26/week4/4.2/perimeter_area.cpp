#include <iostream>
void f(double a, double b, double& l,double& s){
    l= 2*a+2*b;
    s= a*b;
}
int main(){
    double a,b,l,s;
    std::cin>>a>>b;
    f(a,b,l,s);
    std::cout<<"the peremeter is:"<<l<<std::endl;
    std::cout<<"the area is:"<<s<<std::endl;
}