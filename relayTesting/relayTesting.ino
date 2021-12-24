int relay1Pin = 7;
int relay2Pin = 8;
int delayms = 250;

void setup() {
  // put your setup code here, to run once:
  pinMode(relay1Pin, OUTPUT);
  pinMode(relay2Pin, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // relay 1 off, relay 2 off
  digitalWrite(relay1Pin, LOW);
  digitalWrite(relay2Pin, LOW);
  digitalWrite(LED_BUILTIN, LOW);
  delay(delayms);

  // relay 1 off, relay 2 on (should be no change)
  digitalWrite(relay1Pin, LOW);
  digitalWrite(relay2Pin, HIGH);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(delayms);

  // relay 1 on, relay 2 off
  digitalWrite(relay1Pin, HIGH);
  digitalWrite(relay2Pin, LOW);
  digitalWrite(LED_BUILTIN, LOW);
  delay(delayms);

  digitalWrite(relay1Pin, LOW);
  delay(1000);

  // relay 1 on, relay 2 on
  digitalWrite(relay1Pin, HIGH);
  digitalWrite(relay2Pin, HIGH);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(delayms);

  digitalWrite(relay1Pin, LOW);
  delay(1000);
}
