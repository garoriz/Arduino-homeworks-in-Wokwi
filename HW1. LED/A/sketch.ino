const int ledPin = 8;

const unsigned long blinkPeriod = 1000; 

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(blinkPeriod / 2);
  
  digitalWrite(ledPin, LOW);
  delay(blinkPeriod / 2);
}

/***
Вопросы и задания:
2. Резистор в цепи нужен для ограничения тока, проходящего через светодиод.
3. Чтобы рассчитать сопротивление резистора, используется закон Ома: V = IR (V - напряжение, I - сила тока, 
R - сопротивление)
***/
