#include <AFMotor.h>
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);
int trigger = A3;
int echo = A5;
int tiempo, distancia;
void setup() {
  pinMode(trigger,OUTPUT);
pinMode(echo,INPUT);
  motor1.setSpeed(250);
  motor2.setSpeed(250);
  motor3.setSpeed(250);
  motor4.setSpeed(250);
}

void loop() {  
   digitalWrite(trigger,HIGH);
  delay(10);
  digitalWrite(trigger,LOW);
  
  tiempo=pulseIn(echo,HIGH);
  distancia= tiempo/59;

  if(distancia < 30)
  {
motor1.run(RELEASE);
motor2.run(RELEASE);
motor3.run(RELEASE);
motor4.run(RELEASE);
  }
    else
      {
motor1.run(FORWARD);
motor2.run(FORWARD);
motor3.run(FORWARD);
motor4.run(FORWARD);
  }
}
