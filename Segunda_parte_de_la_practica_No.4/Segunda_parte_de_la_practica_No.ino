//Damasco Oxcal Vasquez 2023442.
//Segunda parte de la practica numero cuatro.
void setup(){
  for(int t=4; t<=10; t++){
    pinMode(t, OUTPUT);
  }
  Serial.begin(9600);
  pinMode(3, INPUT);
    pinMode(2, INPUT);
}

void loop(){
  if(digitalRead(3) == HIGH){
  Serial.println("Secuencia - velocidad 1");
    for(int z=4; z<10; z++){
    digitalWrite(z, HIGH);
    delay(500);
    digitalWrite(z, LOW);
  }
  for(int z=10; z>4; z--){
    digitalWrite(z, HIGH);
    delay(500);
    digitalWrite(z, LOW);
   }
  }
 
  if(digitalRead(2) == HIGH){
  Serial.println("Secuencia - velocidad 2");
    for(int l=4; l<10; l++){
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
    }
    for(int l=10; l>4; l--){
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
   }
  }
 }
