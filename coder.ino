// Code for the shooter
#define laser 8

boolean f_1 = 0;
boolean f_2 = 0; 
boolean f_3 = 0; 

#define butt_1 2
boolean butt_flag_1 = 0;
#define butt_2 7
boolean butt_flag_2 = 0;
#define butt_3 12
boolean butt_flag_3 = 0;

void setup() 
{
  Serial.begin(9600);
  pinMode(laser, OUTPUT);
  pinMode(butt_1, INPUT_PULLUP);
  pinMode(butt_2, INPUT_PULLUP);
  pinMode(butt_3, INPUT_PULLUP);
}

void loop()
{
 boolean b_1 = !digitalRead(butt_1);
 boolean b_2 = !digitalRead(butt_2);
 boolean b_3 = !digitalRead(butt_3);
 if(b_1 == 1 && butt_flag_1 == 0)
  {
    butt_flag_1 = 1;
    Serial.println("butt_1 = 1");
    delay(50);
    f_1 = 0;
  }
 if(b_1 == 0 && butt_flag_1 == 1)
  {
    butt_flag_1 = 0;
    Serial.println("butt_1 = 0");
  }
  /////////////////////////////////////
   if(b_2 == 1 && butt_flag_2 == 0)
  {
    butt_flag_2 = 1;
    Serial.println("butt_2 = 1");
    delay(50);
    f_2 = 0; 
  }
 if(b_2 == 0 && butt_flag_2 == 1)
  {
    butt_flag_2 = 0;
    Serial.println("butt_2 = 0");
  }
  ////////////////////////////////////
   if(b_3 == 1 && butt_flag_3 == 0)
  {
    butt_flag_3 = 1;
    Serial.println("butt_3 = 1");
    delay(50);
    f_3 = 0; 
  }
 if(b_3 == 0 && butt_flag_3 == 1)
  {
    butt_flag_3 = 0;
    Serial.println("butt_3 = 0");
  }
  ////////////////////////////////////////////////////////////////////
  if(butt_flag_1 == 1 && f_1 == 0)
    {
      digitalWrite(laser, HIGH);
      delay(50);
      digitalWrite(laser, LOW);
      delay(50);
      digitalWrite(laser, HIGH);
      delay(400);
      digitalWrite(laser, LOW);
      f_1 = f_1+1;
      delay(100);
    }
    ///////////////////////////////////////
      if(butt_flag_2 == 1 && f_2 == 0)
    {
      digitalWrite(laser, HIGH);
      delay(50);
      digitalWrite(laser, LOW);
      delay(50);
      digitalWrite(laser, HIGH);
      delay(200);
      digitalWrite(laser, LOW);
      delay(100);
      digitalWrite(laser, HIGH);
      delay(100);
      digitalWrite(laser, LOW);
      f_2 = f_2+1;
      delay(100);
    }
    ///////////////////////////////////////
      if(butt_flag_3 == 1 && f_3 == 0)
    {
      digitalWrite(laser, HIGH);
      delay(50);
      digitalWrite(laser, LOW);
      delay(50);
      digitalWrite(laser, HIGH);
      delay(100);
      digitalWrite(laser, LOW);
      delay(100);
      digitalWrite(laser, HIGH);
      delay(200);
      digitalWrite(laser, LOW);     
      f_3 = f_3+1;
      delay(100);
    }
    ///////////////////////////////////////
}
