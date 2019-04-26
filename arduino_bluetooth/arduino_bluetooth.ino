int x;


void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available()>0){
  x=Serial.read();
}

if(x=='1'){
  digitalWrite(13,HIGH);
  Serial.println("LED:ON");
}
else if(x=='0'){
  digitalWrite(13,LOW);
  Serial.println("LED:OFF");
}
}
