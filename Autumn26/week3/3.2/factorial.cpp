#include <iostream>
int main(){
    double n,i,x;
    x=1;
    std::cin>>n;
    for (i=1;i<=n;i++){
        x=x*i;
    }
    std::cout<<x<<std::endl;
}