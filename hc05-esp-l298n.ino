char data;

#define M1_1 D5
#define M1_2 D6
#define M2_1 D7
#define M2_2 D8

void setup(){
  pinMode(M1_1, OUTPUT);
  pinMode(M1_2, OUTPUT);
  pinMode(M2_1, OUTPUT);
  pinMode(M2_2, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  if (Serial.available()){
    char data;
    data = Serial.read();
    Serial.println(data);

    if(data=='F')
    {
      digitalWrite(M1_1,LOW);
      digitalWrite(M1_2,HIGH);
      digitalWrite(M2_1,HIGH);
      digitalWrite(M2_2,LOW);
    }
    if(data=='B')
    {
      digitalWrite(M1_1,HIGH);
      digitalWrite(M1_2,LOW);
      digitalWrite(M2_1,LOW);
      digitalWrite(M2_2,HIGH);
    }
    if(data=='L')
    {
      digitalWrite(M1_1,HIGH);
      digitalWrite(M1_2,LOW);
      digitalWrite(M2_1,HIGH);
      digitalWrite(M2_2,LOW);
    }

    if(data=='R')
    {
      digitalWrite(M1_1,LOW);
      digitalWrite(M1_2,HIGH);
      digitalWrite(M2_1,LOW);
      digitalWrite(M2_2,HIGH);
    }
    if(data=='S')
    {
      digitalWrite(M1_1,LOW);    
      digitalWrite(M1_2,LOW);
      digitalWrite(M2_1,LOW);
      digitalWrite(M2_2,LOW);
    }

  }
}
