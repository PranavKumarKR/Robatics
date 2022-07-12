const int led=12;
const int led1=13;

void setup() {
pinMode (led , OUTPUT);
pinMode (led1 , OUTPUT);
}
void loop() {
digitalWrite(led,HIGH);
digitalWrite(led1,LOW);
delay (1000);
digitalWrite(led,LOW);
digitalWrite(led1,HIGH);
delay(1000);

}
