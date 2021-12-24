int relay1Pin = 7;
int relay2Pin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(relay1Pin, OUTPUT);
  pinMode(relay2Pin, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // all relays off
  digitalWrite(relay1Pin, LOW);
  digitalWrite(relay2Pin, LOW);
  digitalWrite(LED_BUILTIN, HIGH  );
}
