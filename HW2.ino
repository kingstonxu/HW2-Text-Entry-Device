/*
Kingston Xu

Homework 2

 */

#if defined(ARDUINO) 
SYSTEM_MODE(SEMI_AUTOMATIC); 
#endif

//global variables
int sensorVal;
int sensorVal2;
int sensorVal3;
int sensorVal4;
int prevSensorVal;
int prevSensorVal2;
int prevSensorVal3;
int prevSensorVal4;
int delayTime = 50;
char alphabet[] = "abcdefghijklmnopqrstuvwxyz ";
char printChar;

void setup() {
  //start serial connection
  Serial.begin(9600);
  //configure D0, D1, D2, and D3 as an input and enable the internal pull-up resistor
  pinMode(D0, INPUT_PULLUP);
  pinMode(D1, INPUT_PULLUP);
  pinMode(D2, INPUT_PULLUP);
  pinMode(D3, INPUT_PULLUP);
}

void loop()
{
  // if the first button is pressed first...
  prevSensorVal = sensorVal;
  sensorVal = digitalRead(D0);
  if (sensorVal == LOW && sensorVal != prevSensorVal) // if the switch is closed AND was not in the previous state (ie. change of state)
  {
    printChar = alphabet[0];
    while (digitalRead(D0) == LOW)
    {
      prevSensorVal2 = sensorVal2;
      sensorVal2 = digitalRead(D1);
      if (sensorVal2 == LOW && sensorVal2 != prevSensorVal2)
      {
        printChar = alphabet[4];
        while (digitalRead(D1) == LOW)
        {
          prevSensorVal3 = sensorVal3;
          sensorVal3 = digitalRead(D2);
          if (sensorVal3 == LOW && sensorVal3 != prevSensorVal3)
          {
            printChar = alphabet[16];
          }

          prevSensorVal4 = sensorVal4;
          sensorVal4 = digitalRead(D3);
          if (sensorVal4 == LOW && sensorVal4 != prevSensorVal4)
          {
            printChar = alphabet[17];
          }
          
          delay(delayTime);
        }
      }

      prevSensorVal3 = sensorVal3;
      sensorVal3 = digitalRead(D2);
      if (sensorVal3 == LOW && sensorVal3 != prevSensorVal3)
      {
        printChar = alphabet[5];
        while (digitalRead(D2) == LOW)
        {
          prevSensorVal2 = sensorVal2;
          sensorVal2 = digitalRead(D1);
          if (sensorVal2 == LOW && sensorVal2 != prevSensorVal2)
          {
            printChar = alphabet[18];
          }

          prevSensorVal4 = sensorVal4;
          sensorVal4 = digitalRead(D3);
          if (sensorVal4 == LOW && sensorVal4 != prevSensorVal4)
          {
            printChar = alphabet[19];
          }
          
          delay(delayTime);
        }
      }

      prevSensorVal4 = sensorVal4;
      sensorVal4 = digitalRead(D3);
      if (sensorVal4 == LOW && sensorVal4 != prevSensorVal4)
      {
        printChar = alphabet[6];
        while (digitalRead(D3) == LOW)
        {
          prevSensorVal2 = sensorVal2;
          sensorVal2 = digitalRead(D1);
          if (sensorVal2 == LOW && sensorVal2 != prevSensorVal2)
          {
            printChar = alphabet[20];
          }

          prevSensorVal3 = sensorVal3;
          sensorVal3 = digitalRead(D2);
          if (sensorVal3 == LOW && sensorVal3 != prevSensorVal3)
          {
            printChar = alphabet[21];
          }
          
          delay(delayTime);
        }
      }
      
      delay(delayTime);
    }
  }

  // if the second button is pressed first...
  prevSensorVal2 = sensorVal2;
  sensorVal2 = digitalRead(D1);
  if (sensorVal2 == LOW && sensorVal2 != prevSensorVal2)
  {
    printChar = alphabet[1];
    while (digitalRead(D1) == LOW)
    {
      prevSensorVal = sensorVal;
      sensorVal = digitalRead(D0);
      if (sensorVal == LOW && sensorVal != prevSensorVal)
      {
        printChar = alphabet[7];
        while (digitalRead(D0) == LOW)
        {
          prevSensorVal3 = sensorVal3;
          sensorVal3 = digitalRead(D2);
          if (sensorVal3 == LOW && sensorVal3 != prevSensorVal3)
          {
            printChar = alphabet[22];
          }

          prevSensorVal4 = sensorVal4;
          sensorVal4 = digitalRead(D3);
          if (sensorVal4 == LOW && sensorVal4 != prevSensorVal4)
          {
            printChar = alphabet[23];
          }
          
          delay(delayTime);
        }
      }

      prevSensorVal3 = sensorVal3;
      sensorVal3 = digitalRead(D2);
      if (sensorVal3 == LOW && sensorVal3 != prevSensorVal3)
      {
        printChar = alphabet[8];
        while (digitalRead(D2) == LOW)
        {
          prevSensorVal = sensorVal;
          sensorVal = digitalRead(D0);
          if (sensorVal == LOW && sensorVal != prevSensorVal)
          {
            printChar = alphabet[24];
          }

          prevSensorVal4 = sensorVal4;
          sensorVal4 = digitalRead(D3);
          if (sensorVal4 == LOW && sensorVal4 != prevSensorVal4)
          {
            printChar = alphabet[25];
          }
          
          delay(delayTime);
        }
      }

      prevSensorVal4 = sensorVal4;
      sensorVal4 = digitalRead(D3);
      if (sensorVal4 == LOW && sensorVal4 != prevSensorVal4)
      {
        printChar = alphabet[9];
        while (digitalRead(D3) == LOW)
        {
          prevSensorVal = sensorVal;
          sensorVal = digitalRead(D0);
          if (sensorVal == LOW && sensorVal != prevSensorVal)
          {
            printChar = alphabet[26];
          }
          delay(delayTime);
        }
      }
      
      delay(delayTime);
    }
  }

  //if the third button is pressed first...
  prevSensorVal3 = sensorVal3;
  sensorVal3 = digitalRead(D2);
  if (sensorVal3 == LOW && sensorVal3 != prevSensorVal3)
  {
    printChar = alphabet[2];
    while (digitalRead(D2) == LOW)
    {
      prevSensorVal = sensorVal;
      sensorVal = digitalRead(D0);
      if (sensorVal == LOW && sensorVal != prevSensorVal)
      {
        printChar = alphabet[10];
      }

      prevSensorVal2 = sensorVal2;
      sensorVal2 = digitalRead(D1);
      if (sensorVal2 == LOW && sensorVal2 != prevSensorVal2)
      {
        printChar = alphabet[11];
      }

      prevSensorVal4 = sensorVal4;
      sensorVal4 = digitalRead(D3);
      if (sensorVal4 == LOW && sensorVal4 != prevSensorVal4)
      {
        printChar = alphabet[12];
      }
      
      delay(delayTime);
    }
  }

  // if the fourth button is pressed first...
  prevSensorVal4 = sensorVal4;
  sensorVal4 = digitalRead(D3);
  if (sensorVal4 == LOW && sensorVal4 != prevSensorVal4)
  {
    printChar = alphabet[3];
    while (digitalRead(D3) == LOW)
    {
      prevSensorVal = sensorVal;
      sensorVal = digitalRead(D0);
      if (sensorVal == LOW && sensorVal != prevSensorVal)
      {
        printChar = alphabet[13];
      }

      prevSensorVal2 = sensorVal2;
      sensorVal2 = digitalRead(D1);
      if (sensorVal2 == LOW && sensorVal2 != prevSensorVal2)
      {
        printChar = alphabet[14];
      }

      prevSensorVal3 = sensorVal3;
      sensorVal3 = digitalRead(D2);
      if (sensorVal3 == LOW && sensorVal3 != prevSensorVal3)
      {
        printChar = alphabet[15];
      }
      
      delay(delayTime);
    }
  }
  
  //when all buttons released, print appropriate character
  if (digitalRead(D0) == HIGH && digitalRead(D1) == HIGH && digitalRead(D2) == HIGH && digitalRead(D3) == HIGH && (sensorVal != prevSensorVal || sensorVal2 != prevSensorVal2 || sensorVal3 != prevSensorVal3 || sensorVal4 != prevSensorVal4))
  {
    Serial.print(printChar);
  }

  sensorVal = digitalRead(D0);
  sensorVal2 = digitalRead(D1);
  sensorVal3 = digitalRead(D2);
  sensorVal4 = digitalRead(D3);
  
  delay(delayTime);
  
}


