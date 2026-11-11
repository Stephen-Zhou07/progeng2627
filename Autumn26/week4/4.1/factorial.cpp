#include <iostream>
int f (int n){
    int m=1;
    for (int i=1;i<n+1;i++){
        m=m*i;
    }
    return m;
}
int main(){
    int n;
    std::cin>>n;
    std::cout<< f(n)<<std::endl;
}