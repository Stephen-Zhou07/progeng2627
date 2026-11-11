#include <iostream>
//#include <cmath>
double f (double n,double x){
    int t=0,m;
    for(int i=1;i<n+1;i++){
        m=std::pow(x,i);
        t=t+m;
    }
    return t;
}
int main(){
    int x,y;
    std::cin>>x>>y;
    std::cout<<f(x,y)<<std::endl;
}