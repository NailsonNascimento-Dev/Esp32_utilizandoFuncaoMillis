#include <Arduino.h>
// ================================================================================================================
// --- Mapeamento de Hardware ---
#define out1 15
#define out2 4
#define out3 5

// ================================================================================================================
// --- Variáveis Globais ---
int out1_time_save = 0,
    out2_time_save = 0, 
    out3_time_save = 0;

// ================================================================================================================
// --- Constantes do projeto---

//degine os tempos desejados
#define out1_time 1000
#define out2_time 2000
#define out3_time 3000


void setup() {
  pinMode(out1, OUTPUT);
  pinMode(out2, OUTPUT);
  pinMode(out3, OUTPUT);

  digitalWrite(out1, LOW);  //100ms
  digitalWrite(out2, LOW);  //200ms
  digitalWrite(out3, LOW);  //300ms

}

void loop() {

  
  if( millis() - out1_time_save >= out1_time ){

  digitalWrite(out1, !digitalRead(out1));
  out1_time_save = millis();
  }//end if out1


  if( millis() - out2_time_save >= out2_time ){

  digitalWrite(out2, !digitalRead(out2));
  out2_time_save = millis();
  }//end if out2

  if( millis() - out3_time_save >= out3_time){

  digitalWrite(out3, !digitalRead(out3));
  out3_time_save = millis();
  }//end if out3

  /*
    digitalWrite(out2, !digitalRead(out2));
    delay(200);
    
    delay(300);
  */
}