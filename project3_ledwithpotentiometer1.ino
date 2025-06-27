// C++ code
//
int value = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  value = analogRead(A0);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(value); // Wait for value millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(value); // Wait for value millisecond(s)
}