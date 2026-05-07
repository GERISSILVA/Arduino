#define led 4
#define btn 3

int estado = 0;

void setup(){
 pinMode(led,OUTPUT);
   pinMode(btn,INPUT);
   
}

void acender_led(){
 estado = 1;
   
}

void apagar_led(){
 estado=0;
}



void controle(){
  if(estado==0){
   digitalWrite(led,HIGH);
  }
  else{
   digitalWrite(led,LOW);
  }
}
void loop(){
  if(digitalRead(btn)==HIGH){
    if(estado==0){
     acender_led();
    }
    else{
     apagar_led();
    }
  }
  
  
  controle();
 
}