void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(A5,INPUT);
pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int a = analogRead(A5);
if(a >1000){
  a = 1000;
  }
analogWrite(3, 100+a/10);
analogWrite(5, 100-a/10);
}
