int n=1;

long time1;
long time2;
int signallength1;

long time3;
long time4;
int signallength2;

byte address;
byte command;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, INPUT); 
}

void loop() {

  if(digitalRead(2)==0){
    time1=micros();
    while(digitalRead(2)==0){
    }
    time2=micros();

    signallength1=time2-time1;

    if(digitalRead(2)==1){
      while(digitalRead(2)==1){
      }
      time4=micros();

      signallength2=time4-time2;
    }  
    if(signallength2>4000&signallength1>8000){
      Serial.println();
      Serial.println();
      Serial.println("Begin");
      n=1;
    }
    if(signallength2<4000){
      if(n<33){
        if(signallength2>1000){
          Serial.print("1");
        }
        else{
          Serial.print("0");
        }
        if(n%8==0){
          Serial.println();
        }
        if(n%32==0){
          Serial.println("End");
          Serial.println();
        }
        n++;
      }
    }
  }
}













