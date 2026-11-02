#include <iostream>
#include <string>
int main(){
    std::string n;
    std::cin>>n;
    while(n !="stop"){
            std::cout<<n<<std::endl;
            std::cin>>n;
            break;
        }   
    std::cout<<"ok,stop"<<std::endl;  
}