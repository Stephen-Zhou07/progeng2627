#include <iostream>
int main(){
    int a,b;
    std::cout<<"please enter a number"<<std::endl;
    std::cin>>a;
    b = a%3;
    if(b==0){
        std::cout<<"the number is a multiple of 3"<<std::endl;        
    }
    else{
        std::cout<< "the number is not a multiple of 3"<<std::endl;
    }
}