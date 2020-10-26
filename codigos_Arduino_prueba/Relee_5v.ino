
int relay = 2;

void setup() {
  // Configuración
  pinMode(relay, OUTPUT); // Configurar relay como salida
  Serial.begin(9600); 
}

void loop() {
  
  digitalWrite(relay, HIGH); 
  Serial.println("Relay ON");
  delay(1000);     
  
  digitalWrite(relay, LOW);  
  Serial.println("Relay OFF");
  delay(1000);          

}
