#include <iostream>
double f (double a,double b,double c){
    int m=0;
    m =a;
    if (m>b){
        m=b;
    }
    if (m>c){
        m=c;
    }
    return m;
}
int main (){
    double a,b,c;
    std::cin>>a>>b>>c;
    std::cout<<"the minimum number is:"<<f(a,b,c)<<std::endl;
}