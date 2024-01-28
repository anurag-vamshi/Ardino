int LED = D5;
int LED1 = D6;
int ir_sensor = D4;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(ir_sensor,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorstatus = digitalRead(ir_sensor);
  if (sensorstatus == 1)
  digitalWrite(LED, HIGH);
  else
  digitalWrite(LED, LOW);
   if (sensorstatus == 0)
  digitalWrite(LED1, HIGH);
  else
  digitalWrite(LED1, LOW);
}
