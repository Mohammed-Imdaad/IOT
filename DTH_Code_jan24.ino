#include "DHT.h"

DHT dht16(16,DHT11);

void setup()
{
  Serial.begin(9600);

}


void loop()
{

    t = (dht16.readTemperature( ));
    h = (dht16.readHumidity( ));
    Serial.println(h);
    Serial.println(t);
    delay(1000);

}
