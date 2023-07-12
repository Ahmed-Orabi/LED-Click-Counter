int red = 10;
int yellow = 9;
int green = 8;
int push = 11;
int lastButtonState;
int currentButtonState;
int redState = LOW;
int yellowState = LOW;
int greenState = LOW;

void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(green,OUTPUT);
pinMode(push,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
lastButtonState = currentButtonState;
currentButtonState = digitalRead(push);

  if(lastButtonState == HIGH && currentButtonState == LOW)
  {
    if(redState == LOW && yellowState == LOW && greenState == LOW)
    {
      digitalWrite(red, HIGH);
      redState = HIGH;
    }
    else if(redState == HIGH && yellowState == LOW && greenState == LOW)
    {
      digitalWrite(yellow, HIGH);
      yellowState = HIGH;
    }
    else if(redState == HIGH && yellowState == HIGH && greenState == LOW)
    {
      digitalWrite(green, HIGH);
      greenState = HIGH;
    }else
    {
      digitalWrite(red,LOW);
      digitalWrite(yellow,LOW);
      digitalWrite(green,LOW);
      redState = LOW;
      yellowState = LOW;
      greenState = LOW;
    }
  }
}
