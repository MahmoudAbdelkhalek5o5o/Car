#define trig 3
#define echo 4
#define obstacle 2
#define light 5


void setup(){
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(obstacle , OUTPUT ) ;
  pinMode(light,OUTPUT);
  pinMode(A0,INPUT);
  
  
  //pinMode(moveL,INPUT);
  //pinMode(moveR,INPUT);
  Serial.begin(9600);
  //forward();
}

int counter = 0 ;
int blah = 0;
void loop() {
  if (analogRead(A0)<200)
    digitalWrite(light,HIGH);
  else
    digitalWrite(light,LOW);
  //digitalWrite(obstacle,LOW);
  int s= calcDistance();
  //
  
  
  if( s < 25){
    digitalWrite(obstacle, HIGH);
  }
  else{
    digitalWrite(obstacle, LOW); 
  }
  blah = digitalRead(11);
 
Serial.print("distance: ");
Serial.println(s);
Serial.print("light sensitivity: ");
Serial.println(analogRead(A0)) ;  
Serial.println("-------");


delay(500);
  counter ++ ;
}

long duration;
int distance;

int calcDistance(){
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echo, HIGH);
  // Calculating the distance
  distance= duration*0.034/2;  
  return distance;
}

  
