#include <iostream>
#include <cmath>

class InOut{
    public:
        double in1;
        double in2;
        double ans;
        
        void Addition(){
            std::cout<<"Input augend:\n";
            std::cin>>in1;
            std::cout<<"Input addend:\n";
            std::cin>>in2;
            ans = in1 + in2;
            std::cout<<"The sum is: "<<ans<<"\n";
        }
        void Subtraction(){
            std::cout<<"Input minuend:\n";
            std::cin>>in1;
            std::cout<<"Input subtrahend:\n";
            std::cin>>in2;
            ans = in1 - in2;
            std::cout<<"The difference is: "<<ans<<"\n";
        }
        void Multiplication(){
            std::cout<<"Input multiplicand:\n";
            std::cin>>in1;
            std::cout<<"Input multiplier:\n";
            std::cin>>in2;
            ans = in1 * in2;
            std::cout<<"The product is: "<<ans<<"\n";
        }
        void Division(){
            std::cout<<"Input dividend:\n";
            std::cin>>in1;
            std::cout<<"Input divisor:\n";
            std::cin>>in2;
            ans = in1 / in2;
            std::cout<<"The quotient is: "<<ans<<"\n";
        }
        void Exponentiation(){
            std::cout<<"Input base:\n";
            std::cin>>in1;
            std::cout<<"Input exponent:\n";
            std::cin>>in2;
            ans = pow(in1,in2);
            std::cout<<"The product is: "<<ans<<"\n";
        }
};

int main()
{   
    InOut inout;
    
    bool playing {true};
    int playagain;
    unsigned int equ;
    
    do{
        
        std::cout<<"Select equation type:\n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n5) Exponentiation\n";
        std::cin>>equ;
        
        if(equ >= 1 && equ <= 5){
            switch(equ){
                case 1:
                    inout.Addition();
                    break;
                case 2:
                    inout.Subtraction();
                    break;
                case 3:
                    inout.Multiplication();
                    break;
                case 4:
                    inout.Division();
                    break;
                case 5:
                    inout.Exponentiation();
            }
            
            std::cout<<"Would you like me to solve another equation?\n1) Yes\n2) No\n";
            std::cin>>playagain;
            
            if(playagain >= 1 && playagain <= 2){
                switch(playagain){
                    case 1:
                        playing = true;
                        break;
                    case 2:
                        playing = false;
                        break;
                }
            }
            else{
            std::cout<<"Invalid choice. Please try again.\n";
            continue;
            }
        }
        else{
            std::cout<<"Invalid choice. Please try again.\n";
            continue;
        }
    }while(playing == true);
    return 0;
}
