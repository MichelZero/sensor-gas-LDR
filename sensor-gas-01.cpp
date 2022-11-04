// autor:
// Michel Silva
//
// Data: 03/11/2022

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
  
  int sensorGas = analogRead(Sensor);
  Serial.println(sensorGas);
  
  // menor 20 e maior 60
  if(sensorGas > 60){
    digitalWrite(VERMELHO, HIGH);
    digitalWrite(Buzzer, HIGH);
  }
  else if(sensorGas > 20){
    digitalWrite(AMARELO, HIGH);
  } else {
      digitalWrite(VERDE, HIGH);
    }

  delay(250);
}
