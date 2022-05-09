/**
 * In this world simulating game nobody cares about anything but the wind chill temperature and humidity
 */

/**
 * Dit een voorbeeld voor waarom je private/public gebruikt.
 * 
 */

/**
 * Een voorbeeld van een classe waar alles public is. Een van de problemen is dat elke AI (chilly bot)
 * de wereld zomaar kan aanpassen. Zie bijv playGod in ChillyBot1
 * 
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
        simulate();
    }

    void simulate(){
        /* do stuff with the world */
    }
        
};

/**
 * We hebben hier eenzelfde object, maar met private members en geen Setters. 
 * Nu kan dus niet zomaar iedereen de wereld aanpassen. Maar, zoals bovenaan in dit bestand beschreven, 
 * is niemand geinteresseerd in iets, behalve de gevoelstemperatuur. chillybot heeft een implementatie 
 * die er vanuit gaat dat we met Fahrenheit werken. Als we nu in onze simulatie functie erachter komen
 * dat we met celcius willen werken, dan moet iedereen die deze code gebruikt zijn/haar functie aanpassen
 * 
 */
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
        simulate();
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

/**
 * Door hier de code zo op te stellen dat je alleen de gevoelstemperatuur meegeeft hebben we minder kans
 * dat voorgaande problemen voorkomen. Uiteraard is onze business rule "iedereen is alleen maar geinteresseerd
 * in de gevoelstemperatuur" twijfelachtig. Maar het idee is dat je alles private maakt behalve letterlijk 
 * de gebruiker nodig heeft.
 * 
 */

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

