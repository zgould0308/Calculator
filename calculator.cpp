#include <iostream>

class Input{
    public:
        double dvd;
        double dvs;
        
        void setEquation(){
            std::cout<<"Input dividend:\n";
            std::cin>>dvd;
            std::cout<<"Input divisor:\n";
            std::cin>>dvs;
        }
};

int main()
{
    double quotient;
    Input In;
    
    In.setEquation();
    quotient = In.dvd/In.dvs;
    std::cout<<"The quotient is: "<<quotient<<std::endl;
    return 0;
}