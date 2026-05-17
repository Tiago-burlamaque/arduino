int sensor = A0;
int ledYellow = 2;
int ledRed = 3;

void setup() {
	Serial.begin(9600);
  	pinMode(ledYellow, OUTPUT);
  	pinMode(ledRed, OUTPUT);
}

void loop() {
 	int valor = analogRead(sensor);
 
  	float tensao = valor * 5.0;
  	tensao = tensao / 1024.0;
  
  	float temperatura = (tensao - 0.5) * 100;
  
  	Serial.print("Temperatura: ");
  	Serial.print(temperatura);
  	Serial.println(" C");
  
  if(temperatura >= 30 && temperatura < 50){
    digitalWrite(ledYellow, HIGH);
    delay(300);
    digitalWrite(ledYellow, LOW);
	delay(300);
    Serial.println("Ligado");
  } else if(temperatura > 50){
	digitalWrite(ledRed, HIGH);
    delay(100);
    digitalWrite(ledRed, LOW);
    delay(100);
    Serial.println("Emergência! Temperatura elevada.");
  } else {
   	Serial.println("Desligado"); 
  }
  delay(100);
}