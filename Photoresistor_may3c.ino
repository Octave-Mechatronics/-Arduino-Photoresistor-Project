int redP = 9;
int greenP = 8;

int lightPen = A0;
int lightVal;
int dv=250;
void setup() {
  // put your setup code here, to run once:
  pinMode(lightPen, INPUT);
  pinMode(redP, OUTPUT);
  pinMode(greenP, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal =analogRead(lightPen);
  Serial.println(lightVal);
  delay(dv);
  if (lightVal >350){
    digitalWrite (greenP, HIGH);
    digitalWrite(redP, LOW);
  }
  if(lightVal<350){
    digitalWrite (greenP, LOW);
    digitalWrite(redP, HIGH);
  }

}
