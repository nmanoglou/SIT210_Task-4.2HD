int redLed = D6;
int yellowLed = D4;
int greenLed = D2;

bool redOn = false;
bool yellowOn = false;
bool greenOn = false;

int webFunction(String colour)
{
    if (colour == "red")
    {
        if (digitalRead(redLed) == HIGH)
        {
            digitalWrite(redLed, LOW);

        }
        else
        {
            digitalWrite(redLed, HIGH);

        }
    }
    else if (colour == "yellow")
    {
        if (digitalRead(yellowLed) == HIGH)
        {
            digitalWrite(yellowLed, LOW);

        }
        else
        {
            digitalWrite(yellowLed, HIGH);

        }
    }
    else if (colour == "green")
    {
        if (digitalRead(greenLed) == HIGH)
        {
            digitalWrite(greenLed, LOW);

        }
        else
        {
            digitalWrite(greenLed, HIGH);

        }
    }
    
    return -1;
}

void setup() {
    pinMode(redLed, OUTPUT);
    pinMode(yellowLed, OUTPUT);
    pinMode(greenLed, OUTPUT);

    digitalWrite(redLed, LOW);
    digitalWrite(yellowLed, LOW);
    digitalWrite(greenLed, LOW);

    Particle.function("webFunction", webFunction);
}

void loop() {

}