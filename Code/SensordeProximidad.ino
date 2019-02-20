const int trigPin =3;
const int echoPin =2;
int led1 =4;
int led2 =5;
int led3 =6;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
    Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  
  distance = 0.034 * duration / 2;
  
    Serial.print("distancia: ");
    Serial.println(distance);
    
   if (distance < 25 ){

 digitalWrite(led3,HIGH);
 }else{
 digitalWrite(led3, LOW);
}

  if(distance < 15 ){

 digitalWrite(led2,HIGH);
 }else{
 digitalWrite(led2, LOW);
}  if (distance < 5 ){

 digitalWrite(led1,HIGH);
 }else{
 digitalWrite(led1, LOW);
}
}
