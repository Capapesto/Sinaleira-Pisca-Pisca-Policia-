#define Azul 4
#define Vermelho 2


void setup() {
  Serial.begin(115200);
  delay(500); 
  Serial.println("A policia ta chegando.....");
  pinMode(Azul, OUTPUT);
  pinMode(Vermelho, OUTPUT);
  digitalWrite(Azul, HIGH);
  digitalWrite(Vermelho, LOW);
}

void loop() {
 
  if (digitalRead(Azul) == HIGH) {
    delay(300); 
    digitalWrite(Azul, LOW);
    digitalWrite(Vermelho, HIGH);
    Serial.println("-> Vermelho");
  }

  if (digitalRead(Vermelho) == HIGH) {
    delay(300); 
    digitalWrite(Vermelho, LOW);
    digitalWrite(Azul, HIGH);
    Serial.println("-> Azul");
  }
}
