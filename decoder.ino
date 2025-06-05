//Code for target
boolean flag = 0;
boolean a;
boolean b;
boolean c;
boolean d;

void setup() {
  pinMode(11, INPUT);
  Serial.begin(9600);
}

void loop() {
  delay(1);
  int input_code = !digitalRead(11);
  if (input_code == 1 && flag == 0) {
    delay(50);
    flag = 1;
  }
  if (input_code == 0 && flag == 1) {
    delay(50);
    flag = 0;
    for (int i = 1; i <= 4; i++) {
      input_code = !digitalRead(11); // Считываем input_code на каждой итерации
      if (i == 1) {
        a = input_code;
        delay(100);
      }
      else if (i == 2) {
        b = input_code;
        delay(100);
      }
      else if (i == 3) {
        c = input_code;
        delay(100);
      }
      else if (i == 4) {
        d = input_code;
        delay(100);
        if(a == 1 && b == 1 && c == 1 && d == 1)
        {
          Serial.print("вас подстрелил игрок_1"); Serial.print(";   code   -   "); Serial.print(a); Serial.print(b); Serial.print(c); Serial.println(d);
        }
        else if(a == 1 && b == 1 && c == 0 && d == 1)
        {
          Serial.print("вас подстрелил игрок_2"); Serial.print(";   code   -   "); Serial.print(a); Serial.print(b); Serial.print(c); Serial.println(d);
        }
        else if(a == 1 && b == 0 && c == 1 && d == 1)
        {
          Serial.print("вас подстрелил игрок_3"); Serial.print(";   code   -   "); Serial.print(a); Serial.print(b); Serial.print(c); Serial.println(d);
        }
        else
        {
          Serial.print("вас подстрелил неизвестный игрок"); Serial.print(";   code   -   "); Serial.print(a); Serial.print(b); Serial.print(c); Serial.println(d);
        }
        delay(5);
        break;
      }
    }
  }
}

