const int seg1= 13;
const int seg2= 5;
void setup() {
pinMode (seg1,OUTPUT);
pinMode (seg2,OUTPUT);
}
void loop() {
 for(int i=0;i<=9;i++)
 {
   
 for(int j=0;j<=9;j++){
  digitalWrite(seg2,HIGH);
  delay(100);
  digitalWrite(seg2,LOW);
  delay(100);
 }
 digitalWrite(seg1,HIGH);
 delay(100);
 digitalWrite(seg1,LOW);
 delay(100);
 }




}
