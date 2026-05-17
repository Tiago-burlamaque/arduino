int ledRed = 10;
int ledYellow = 9;
int ledGreen = 8;

void setup()
{
    pinMode(ledRed, OUTPUT);
    pinMode(ledYellow, OUTPUT);
    pinMode(ledGreen, OUTPUT);
}

void loop()
{
    printf("Pode seguir");
    digitalWrite(ledGreen, HIGH);
    delay(5000);
    digitalWrite(ledGreen, LOW);
    printf("Atencao");
    digitalWrite(ledYellow, HIGH);
    delay(2000);
    digitalWrite(ledYellow, LOW);
    printf("Pare");
    digitalWrite(ledRed, HIGH);
    delay(5000);
  	digitalWrite(ledRed, LOW);
}