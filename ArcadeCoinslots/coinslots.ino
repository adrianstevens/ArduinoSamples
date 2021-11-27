#include <Keyboard.h>

const int coinSlotPin1 = 2;  
const int coinSlotPin2 = 3;

int coinState1 = 0;       
int coinState2 = 0;  
     
void setup() 
{
  // initialize the LED pin as an output:
  pinMode(LED_BUILTIN, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(coinSlotPin1, INPUT_PULLUP);
  pinMode(coinSlotPin2, INPUT_PULLUP);
}

void loop() 
{
  coinState1 = digitalRead(coinSlotPin1);

  if (coinState1 == HIGH)
  { // turn LED off:
    digitalWrite(LED_BUILTIN, LOW);
  }
  else 
  { // turn LED on:
    digitalWrite(LED_BUILTIN, HIGH);
    Keyboard.press('3');
    delay(100);
    Keyboard.releaseAll();
  }
   coinState2 = digitalRead(coinSlotPin2);

  if (coinState2 == LOW)
  {
    Keyboard.press('4');
    delay(100);
    Keyboard.releaseAll();
  }
}
