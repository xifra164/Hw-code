#include <iostream>

const int jaar=2025;

int main(){
    int geboortjaar,leeftijd;
    std::cout<<"voer geboorte jaar in";
    std::cin>>"geboortejaar";
    leeftijd= jaar-geboortjaar;
    std::cout<<"je bent"<<leeftijd<<"jaar"<<std::endl;

    return 0;
}