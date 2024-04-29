//Code Starts
const int trigPin = 22;  // Digital pin 22 for trigger
const int echoPin = 23;

int r_en = 2;
int l_en = 3;

int r_en1 = 7;
int l_en1 = 8;

//Use PWM pins
int r_pwm = 5;
int l_pwm = 6;

int r_pwm1 = 10;
int l_pwm1 = 11;

void MotorForward{
  digitalWrite(r_en, HIGH);
    digitalWrite(l_en, HIGH);

    //RPM in forward and backward
    analogWrite(r_pwm, 255);
    analogWrite(l_pwm, 0);
}

void MotorReverse() {
  digitalWrite(r_en, HIGH);
  digitalWrite(l_en, HIGH);

  //RPM in forward and backward
  analogWrite(r_pwm, 0);
  analogWrite(l_pwm, 255);
}

void MotorStop{
  digitalWrite(r_en, LOW);
    digitalWrite(l_en, LOW);

    //RPM in forward and backward
    analogWrite(r_pwm, 0);
    analogWrite(l_pwm, 0);
}

void ActuatorForward{
  digitalWrite(r_en1, HIGH);
    digitalWrite(l_en1, HIGH);

    //RPM in forward and backward
    analogWrite(r_pwm1, 255);
    analogWrite(l_pwm1, 0);
}

void ActuatorReverse() {
  digitalWrite(r_en1, HIGH);
  digitalWrite(l_en, HIGH);

  //RPM in forward and backward
  analogWrite(r_pwm1, 0);
  analogWrite(l_pwm1, 255);
}


void ActuatorStop{
  digitalWrite(r_en1, LOW);
    digitalWrite(l_en1, LOW);

    //RPM in forward and backward
    analogWrite(r_pwm1, 0);
    analogWrite(l_pwm1, 0);
}


long getDistance(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);

  long distance_cm = duration * 0.034 / 2;  // Speed of sound is 0.034 cm/microsecond

  return distance_cm;
}


void setup() {

  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

  pForward
    ActuatorReverse*();