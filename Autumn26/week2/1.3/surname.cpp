#include <iostream>
#include <string>
// this includes the header for text variables

int main(){

    std::string user_name;
    std::string surname;

    // TODO: add another declaration
    // for a text variable called user_surname

    std::cout << "what is your name?" << std::endl;
    std::cin >> user_name;
    std::cout<< "what is your surname?"<< std::endl;
    std::cin >> surname;
    std::cout<< "Hello,"<< user_name<<" "<<surname<< std::endl;

    // TODO: add another printing instruction 
    // asking for the surname

    // TODO: read the surname from the user
    // and store it in variable user_surname

    // TODO: add a printing instruction 
    // that says hello followed by the
    // name and surname of the user
}