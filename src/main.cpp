#include "chilly_bot.cpp"
#include <iostream>

int main(){
    ChillyBot1 al = ChillyBot1();
    if (al.amICold()){
        std::cout << "I am cold";

    }else{
        std::cout << "I am warm";
    }
    return 0;
}