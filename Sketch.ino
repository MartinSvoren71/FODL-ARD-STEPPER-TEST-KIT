#define ENpin 26
#define DIRpin 24
#define STEPpin 22
int uDelay = 50;
String serialstring;
unsigned long countVal = 100;
unsigned long count = 0;
int stepdelay = 50;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ENpin, OUTPUT);
  pinMode(STEPpin, OUTPUT);
  pinMode(DIRpin, OUTPUT);
  digitalWrite(DIRpin, HIGH);
  digitalWrite(STEPpin, HIGH);

}

void loop() {
      digitalWrite(ENpin, LOW);
  while(count < countVal){
    digitalWrite(ENpin, HIGH);
    digitalWrite(STEPpin, HIGH);
  delayMicroseconds(uDelay);
  digitalWrite(STEPpin, LOW);
  delayMicroseconds(uDelay);
  delay(stepdelay);
  count++;
  }
      digitalWrite(ENpin, HIGH);

//
//serialstring = Serial.readStringUntil('\n');
//  Serial.println(serialstring);
//String tempX = (serialstring.substring(0, 2));
//    if (tempX == "FF") {
//  digitalWrite(DIRpin, LOW);
//    }
//     if (tempX == "RR") {
//      digitalWrite(DIRpin, HIGH);
//    }
//    String temp3 = (serialstring.substring(2, 6));
//      countVal = temp3.toInt();
}



