#define pinoLED 9 
#define botao 7
#define led_amarelo 10
#define led_verde 11

int clique =0;
void contador() {
 
  if (digitalRead(botao) == HIGH) {
    clique++; 

    delay(50); 
    while (digitalRead(botao) == HIGH); 
    delay(50);
  }

  
  if (clique == 1) { 
    digitalWrite(pinoLED, HIGH);
  } else if (clique == 2) {
    digitalWrite(led_amarelo, HIGH);
  } else if (clique == 3) {
    digitalWrite(led_verde, HIGH);
  } else if (clique > 3) {
    
    digitalWrite(led_amarelo, LOW);
    digitalWrite(led_verde, LOW);
    clique = 0;
  }
}


void setup() {
  pinMode(9, OUTPUT);
  pinMode(7,INPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);

}

void loop() {
  contador();
  
}