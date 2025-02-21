#include <iostream>

int main(){
    double celsius, fahrenheit;
    std::cout<<"voer de temperatuur in graden celsius in";
    std::cin>>celsius;
    fahrenheit=(celsius*9/5)+32;
    std::cout<<"temperatuur in fahrenheit is"<<fahrenheit<<std::endl;

    return 0;
}