int swiatlo;
int ciemno = 400;

void setup()
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(A0, INPUT);
}

void loop()
{
  swiatlo = analogRead(A0);
  Serial.println(swiatlo);
  delay (1000);
  
  if (swiatlo < ciemno)
    digitalWrite(2, HIGH);
  else 
    digitalWrite(2, LOW);
}