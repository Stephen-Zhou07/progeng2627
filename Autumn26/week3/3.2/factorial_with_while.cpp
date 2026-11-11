#include <iostream>
int main(){
    double x,n,i;
    x=1,i=1;
    std::cin>>n;
    while(i<=n){
        x=x*i;
        i=i+1;
    }
    std::cout<<x<<std::endl;