#define led_vermelho = 8
#define led_amarelo = 9
#define led_verde = 10

void setup(){
  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);



}

void Amarelo(int tmp){
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(tmp);

}
void Vermelho(int tmp){
  digitalWrite(8, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  delay(tmp);
}


void Verde(int tmp){
  digitalWrite(8, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  delay(tmp);
  
}
void loop(){


  
  Amarelo(2000);
  
  
  Vermelho(7000);
 
  
  Verde(9000);
  




}