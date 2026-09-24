// --- MAPEAMENTO DOS PINOS POR VIA ---
// Via 1
#define V1_Verde    10 
#define V1_Amarelo  9  
#define V1_Vermelho 8  

// Via 2
#define V2_Verde    2
#define V2_Amarelo  3
#define V2_Vermelho 4 

// Via 3
#define V3_Verde    11
#define V3_Amarelo  12
#define V3_Vermelho 13

// Via 4
#define V4_Verde    5
#define V4_Amarelo  6
#define V4_Vermelho 7

void setup() {
  // Configura todos os pinos dos semáforos como saída
  pinMode(V1_Verde, OUTPUT);
  pinMode(V1_Amarelo, OUTPUT);
  pinMode(V1_Vermelho, OUTPUT);
  
  pinMode(V2_Verde, OUTPUT);
  pinMode(V2_Amarelo, OUTPUT);
  pinMode(V2_Vermelho, OUTPUT);

  pinMode(V3_Verde, OUTPUT);
  pinMode(V3_Amarelo, OUTPUT);
  pinMode(V3_Vermelho, OUTPUT);
  
  pinMode(V4_Verde, OUTPUT);
  pinMode(V4_Amarelo, OUTPUT);
  pinMode(V4_Vermelho, OUTPUT);
}

void loop() {
  // --- CICLO DA VIA 1 ---
  fase1(); // Via 1: Verde | Demais: Vermelho
  delay(5000); 
  
  fase2(); // Via 1: Amarelo | Demais: Vermelho
  delay(2000); 
  
  // --- CICLO DA VIA 2 ---
  fase3(); // Via 2: Verde | Demais: Vermelho
  delay(5000); 
  
  fase4(); // Via 2: Amarelo | Demais: Vermelho
  delay(2000); 

  // --- CICLO DA VIA 3 ---
  fase5(); // Via 3: Verde | Demais: Vermelho
  delay(5000);

  fase6(); // Via 3: Amarelo | Demais: Vermelho
  delay(2000);

  // --- CICLO DA VIA 4 ---
  fase7(); // Via 4: Verde | Demais: Vermelho
  delay(5000);

  fase8(); // Via 4: Amarelo | Demais: Vermelho
  delay(2000);
}

// ================= FASES DO SEMÁFORO =================

void fase1() {
  // Via 1 Aberta
  digitalWrite(V1_Verde, HIGH);   digitalWrite(V1_Amarelo, LOW);  digitalWrite(V1_Vermelho, LOW);
  // Via 2 Fechada
  digitalWrite(V2_Verde, LOW);    digitalWrite(V2_Amarelo, LOW);  digitalWrite(V2_Vermelho, HIGH);
  // Via 3 Fechada
  digitalWrite(V3_Verde, LOW);    digitalWrite(V3_Amarelo, LOW);  digitalWrite(V3_Vermelho, HIGH);
  // Via 4 Fechada
  digitalWrite(V4_Verde, LOW);    digitalWrite(V4_Amarelo, LOW);  digitalWrite(V4_Vermelho, HIGH);
}

void fase2() {
  // Via 1 Atenção (Amarelo)
  digitalWrite(V1_Verde, LOW);    digitalWrite(V1_Amarelo, HIGH); digitalWrite(V1_Vermelho, LOW);
  // Demais vias fechadas
  digitalWrite(V2_Verde, LOW);    digitalWrite(V2_Amarelo, LOW);  digitalWrite(V2_Vermelho, HIGH);
  digitalWrite(V3_Verde, LOW);    digitalWrite(V3_Amarelo, LOW);  digitalWrite(V3_Vermelho, HIGH);
  digitalWrite(V4_Verde, LOW);    digitalWrite(V4_Amarelo, LOW);  digitalWrite(V4_Vermelho, HIGH);
}

void fase3() {
  // Via 1 Fechada
  digitalWrite(V1_Verde, LOW);    digitalWrite(V1_Amarelo, LOW);  digitalWrite(V1_Vermelho, HIGH);
  // Via 2 Aberta
  digitalWrite(V2_Verde, HIGH);   digitalWrite(V2_Amarelo, LOW);  digitalWrite(V2_Vermelho, LOW);
  // Demais vias fechadas
  digitalWrite(V3_Verde, LOW);    digitalWrite(V3_Amarelo, LOW);  digitalWrite(V3_Vermelho, HIGH);
  digitalWrite(V4_Verde, LOW);    digitalWrite(V4_Amarelo, LOW);  digitalWrite(V4_Vermelho, HIGH);
}

void fase4() {
  // Demais vias fechadas
  digitalWrite(V1_Verde, LOW);    digitalWrite(V1_Amarelo, LOW);  digitalWrite(V1_Vermelho, HIGH);
  // Via 2 Atenção (Amarelo)
  digitalWrite(V2_Verde, LOW);    digitalWrite(V2_Amarelo, HIGH); digitalWrite(V2_Vermelho, LOW);
  digitalWrite(V3_Verde, LOW);    digitalWrite(V3_Amarelo, LOW);  digitalWrite(V3_Vermelho, HIGH);
  digitalWrite(V4_Verde, LOW);    digitalWrite(V4_Amarelo, LOW);  digitalWrite(V4_Vermelho, HIGH);
}

void fase5() {
  digitalWrite(V1_Verde, LOW);    digitalWrite(V1_Amarelo, LOW);  digitalWrite(V1_Vermelho, HIGH);
  digitalWrite(V2_Verde, LOW);    digitalWrite(V2_Amarelo, LOW);  digitalWrite(V2_Vermelho, HIGH);
  // Via 3 Aberta (Vermelho desligado e Verde ligado)
  digitalWrite(V3_Verde, HIGH);   digitalWrite(V3_Amarelo, LOW);  digitalWrite(V3_Vermelho, LOW);
  digitalWrite(V4_Verde, LOW);    digitalWrite(V4_Amarelo, LOW);  digitalWrite(V4_Vermelho, HIGH);
}

void fase6() {
  digitalWrite(V1_Verde, LOW);    digitalWrite(V1_Amarelo, LOW);  digitalWrite(V1_Vermelho, HIGH);
  digitalWrite(V2_Verde, LOW);    digitalWrite(V2_Amarelo, LOW);  digitalWrite(V2_Vermelho, HIGH);
  // Via 3 Atenção (Verde desligado e Amarelo ligado)
  digitalWrite(V3_Verde, LOW);    digitalWrite(V3_Amarelo, HIGH); digitalWrite(V3_Vermelho, LOW);
  digitalWrite(V4_Verde, LOW);    digitalWrite(V4_Amarelo, LOW);  digitalWrite(V4_Vermelho, HIGH);
}

void fase7() {
  digitalWrite(V1_Verde, LOW);    digitalWrite(V1_Amarelo, LOW);  digitalWrite(V1_Vermelho, HIGH);
  digitalWrite(V2_Verde, LOW);    digitalWrite(V2_Amarelo, LOW);  digitalWrite(V2_Vermelho, HIGH);
  digitalWrite(V3_Verde, LOW);    digitalWrite(V3_Amarelo, LOW);  digitalWrite(V3_Vermelho, HIGH);
  // Via 4 Aberta
  digitalWrite(V4_Verde, HIGH);   digitalWrite(V4_Amarelo, LOW);  digitalWrite(V4_Vermelho, LOW);
}

void fase8() {
  digitalWrite(V1_Verde, LOW);    digitalWrite(V1_Amarelo, LOW);  digitalWrite(V1_Vermelho, HIGH);
  digitalWrite(V2_Verde, LOW);    digitalWrite(V2_Amarelo, LOW);  digitalWrite(V2_Vermelho, HIGH);
  digitalWrite(V3_Verde, LOW);    digitalWrite(V3_Amarelo, LOW);  digitalWrite(V3_Vermelho, HIGH);
  // Via 4 Atenção (Amarelo)
  digitalWrite(V4_Verde, LOW);    digitalWrite(V4_Amarelo, HIGH); digitalWrite(V4_Vermelho, LOW);
}