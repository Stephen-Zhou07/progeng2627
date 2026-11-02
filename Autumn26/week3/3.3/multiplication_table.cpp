#include <iostream>
int main(){
    int n,m,i;
    std::cin>>n;
    for(m=1;m<=n;m++){
        for(i=1;i<=n;i++){
            std::cout<<m*i<<"\t";
        }
        std::cout<<std::endl;
    }
}