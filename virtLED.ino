
const int led =13;
char a;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);


 //Serial.begin(9600);
 //Serial.print("WELCOME");
}

void loop() {
 while(Serial.available()>0){
  a=Serial.read();
 Serial.print(a);
 if(a == 's'){
  digitalWrite(led,HIGH);
  delay(100);
 }
 else{
   digitalWrite(led,LOW);
  delay(100); 
 }}}
