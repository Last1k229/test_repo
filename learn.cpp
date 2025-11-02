#include <iostream>
#include <stdexcept>
struct Ground{
    void forget(int x){
        if(x==0xFACE){
            throw std::runtime_error{"Error"};
        }
        std::cout << "Forgot 0x"<< std::hex<<x <<"\n";
    }
};
int main(){
    Ground ground;
    try{
        ground.forget(0xC0DE);
        ground.forget(0xFACE);
        ground.forget(0xC0FFEE);
    }
    catch (const std::runtime_error& e){
        std::cout << "Cought and exception with message: "<< e.what();
    }

}