#Right side motors
int R_IN1 = 7;
int R_IN2 = 6:

#left side motors
int L_IN3 = 5;
int L_IN4 = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(R_IN1, OUTPUT);
  pinMode(R_IN2, OUTPUT);
  pinMode(L_IN3, OUTPUT);
  pinMode(L_IN4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  startCar();
  delay(1000);
  stopCar();
  delay(1000);
  leftTurn();
  delay(1000);
  rightTurn();
  delay(1000);
}

void startCar(){
  digitalWrite(R_IN1, HIGH);
  digitalWrite(R_IN2, LOW);
  digitalWrite(L_IN3, HIGH);
  digitalWrite(L_IN4, LOW);
}

void stopCar(){
  digitalWrite(R_IN1, LOW);
  digitalWrite(R_IN2, LOW);
  digitalWrite(L_IN3, LOW);
  digitalWrite(L_IN4, LOW);
}

void leftTurn(){
  digitalWrite(R_IN1, LOW);
  digitalWrite(R_IN2, HIGH);
  digitalWrite(L_IN3, HIGH);
  digitalWrite(L_IN4, LOW);
}

void rightTurn(){
  digitalWrite(R_IN1, HIGH);
  digitalWrite(R_IN2, LOW);
  digitalWrite(L_IN3, LOW);
  digitalWrite(L_IN4, HIGH);
}
