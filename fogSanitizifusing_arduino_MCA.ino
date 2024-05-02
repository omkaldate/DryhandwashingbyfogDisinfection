 #include<LiquidCrystal.h>
LiquidCrystal disp(13,12,11,10,9,8);
int m1= 6;
int m2 = 7;
int ir = 4;
int fog = 5;
int ir_state =0;

void setup() {
   Serial.begin(9600);
    disp.begin(16,2);
    disp.setCursor(2,0);
    disp.print("starting system");
    delay(300);
    disp.clear();
    disp.print("ready to sanitize");
    delay(300);

pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
pinMode(fog,OUTPUT);
pinMode(ir,INPUT);
}

void loop() {
  disp.clear();
  disp.print("ready to sanitize");
  
ir_state = digitalRead (ir);
if(ir_state == 1){
  digitalWrite(fog,HIGH);
  delay(4000);
  digitalWrite(fog,LOW);
  digitalWrite(m1,HIGH);
  digitalWrite(m2,LOW);
  delay(4000);
  digitalWrite(m1,LOW);
  digitalWrite(m2,LOW);
  
  
  disp.clear();
  disp.print("gurms killed");
  delay(3000);
  }
  }
