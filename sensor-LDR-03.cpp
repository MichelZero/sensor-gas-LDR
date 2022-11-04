// autor:
// Michel Silva
//
// Data: 03/11/2022

// com função

// C++ code
//
//variáveis 
# define VERDE 6
# define AMARELO 7
# define VERMELHO 8
# define Buzzer 2
# define Sensor A0


void setup()
{
  //for (inicio, fim, passo)
  for(int i = 2; i < 9; i++){
    pinMode(i, OUTPUT);
  }
  Serial.begin(9600);  
}

void loop()
{
  //for (inicio, fim, passo)
  for(int i = 2; i < 9; i++){
    digitalWrite(i, LOW);
  }
  
  leitura();
}


// função
void leitura(){
  
  int sensorGas = analogRead(Sensor);
  Serial.println(sensorGas);
  
  // menor 200 e maior 600
  if(sensorGas > 600){
    digitalWrite(VERMELHO, HIGH);
    digitalWrite(Buzzer, HIGH);
  }
  else if(sensorGas > 200){
    digitalWrite(AMARELO, HIGH);
  } else {
      digitalWrite(VERDE, HIGH);
    }

  delay(250);

}
