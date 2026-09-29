#define led 8
#define botao_Branco 7
#define botao_Vermelho 6

int cont = 0;

void potencia (){
    int botao = digitalRead(botao_Branco);
    if (botao == HIGH){
        cont = cont + 10;
        

        if (cont > 255) cont = 255; 
          analogWrite(led, cont);
          delay(150);
    }
    int botao_2 = digitalRead(botao_Vermelho);
    if (botao_2 == HIGH){
      cont = cont -10;
      
        if (cont < 0) cont = 0; 
        analogWrite(led, cont);
        delay(150);
    }
}

void setup(){

  pinMode(8,OUTPUT);
  pinMode(7,INPUT);
  pinMode(6,INPUT);

}


void loop (){
   potencia();
}