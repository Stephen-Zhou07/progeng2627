#include <iostream>
int main(){
    int n,i;
    i=0;
    std::cin>>n;
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }
        else{
            n=3*n+1;
        }
        std::cout<<n<<std::endl;
        i = i+1;
    }
    std::cout<<"number of steps: "<<i<<std::endl;
}