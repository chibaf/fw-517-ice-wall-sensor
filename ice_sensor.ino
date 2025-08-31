int analogPin=0;
int val=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  analogReadResolution(14); //change to 14-bit resolution
}

void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(analogPin);
  Serial.println(val);
}
