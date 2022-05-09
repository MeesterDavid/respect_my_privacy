#include "world.cpp"
#include <string>

class ChillyBot1{
    private:
    std::string name;
    
    public:
    World world;

    ChillyBot1(){
        name = "";
    }

    ChillyBot1(std::string name):
        name(name)
    {
        world = World();

        world.simulate();
    }



    void playGod(){
        world.temperature = 5;
    }

    float getWindChillTemperature(){
        return world.temperature - 0.7*world.windSpeed* 1.1*world.humidity;
    }

    bool amICold(){
        return getWindChillTemperature() < 32 ? true : false;
        // if (getWindChillTemperature() < 32){
        //     return true;
        // }else{
        //     return false;
        // }
    }

};