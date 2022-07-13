int photo = PA0;
void setup() {
  Serial.begin(9600);
  pinMode(photo, INPUT);
}

void loop() {
  int lecture = analogRead(photo);
  Serial.print(lecture / 40.96);
  Serial.println(" %");
  delay(500);
}
