
#define LedV 10 
#define ledA 9  
#define ledR 8  

#define led_v  2
#define led_Av 3
#define led_Rv 4 

void fase1() {
  
  digitalWrite(LedV, HIGH);
  digitalWrite(ledA, LOW);
  digitalWrite(ledR, LOW);
  
  digitalWrite(led_v, LOW);
  digitalWrite(led_Av, LOW);
  digitalWrite(led_Rv, HIGH);
}


void fase2() {

  digitalWrite(LedV, LOW);
  digitalWrite(ledA, HIGH);
  digitalWrite(ledR, LOW);
  
  digitalWrite(led_v, LOW);
  digitalWrite(led_Av, LOW);
  digitalWrite(led_Rv, HIGH);
}


void fase3() {
  
  digitalWrite(LedV, LOW);
  digitalWrite(ledA, LOW);
  digitalWrite(ledR, HIGH);
  
  digitalWrite(led_v, HIGH);
  digitalWrite(led_Av, LOW);
  digitalWrite(led_Rv, LOW);
}

void fase4() {
  
  digitalWrite(LedV, LOW);
  digitalWrite(ledA, LOW);
  digitalWrite(ledR, HIGH);
  
  digitalWrite(led_v, LOW);
  digitalWrite(led_Av, HIGH);
  digitalWrite(led_Rv, LOW);
}

void setup() {
  // Configuração dos Pinos do Semáforo 1
  pinMode(LedV, OUTPUT);
  pinMode(ledA, OUTPUT);
  pinMode(ledR, OUTPUT);
  
  // Configuração dos Pinos do Semáforo 2
  pinMode(led_v, OUTPUT);
  pinMode(led_Av, OUTPUT);
  pinMode(led_Rv, OUTPUT);
}

void loop() {
  fase1();
  delay(5000); // 5 segundos
  
  fase2();
  delay(2000); // 2 segundos
  
  fase3();
  delay(5000); // 5 segundos
  
  fase4();
  delay(2000); // 2 segundos
}