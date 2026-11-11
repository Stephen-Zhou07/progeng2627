#include <iostream>
void f (double& a,double& b,double& c){
    int n;
    if (a>b){
        n=a;
        a=b;
        b=n;
    }
    if (b>c){
        n=b;
        b=c;
        c=n;
    }
    if (a>b){
        n=a;
        a=b;
        b=n;
    }
}
int main(){
    double a,b,c;
    std::cin>>a>>b>>c;
    f (a,b,c);
    std::cout<<a<<","<<b<<","<<c<<std::endl;
}