/**
 * In this world simulating game nobody cares about anything but the wind chill temperature and humidity
 */

class World{
    public:
    float temperature;
    double humidity; 
    int windSpeed;

    World(){
        temperature = 0;
        humidity = 0;
        windSpeed = 0;
    }

    void simulate(){
        /* do stuff with the world */
    }
        
};

class World2{
    private:
    float temperature;
    double humidity;
    int windSpeed;
    


    void simulate(){
        /* do stuff with the world */
    }

    public:
    World2(){
        temperature = 0;
        humidity = 0;
        windSpeed = 0;
    }
    float getTemperature() const{
        return temperature;
    };

    double getHumidity() const{
        return humidity;
    }

    int getWindSpeed() const{
        return windSpeed;
    }
};

class World3{
    private:
    float temperature;
    double humidity; 
    int windSpeed;

  
    void simulate(){
        /* do stuff with the world */
    }

    public:
    World3(){
        temperature = 0;
        humidity = 0;
        windSpeed = 0;
        simulate();
    }
    float getWindChillTemperature(){
        return temperature*(0.7*windSpeed)+10*humidity;
    }

};

