 const int BuzzerPin = 3; //Buzzer Pin
    const int buttonPin = 2; // Push-button pin
    int Att=0;
       
    void setup() {
        Serial.begin(9600); // Opens Serial communication
        pinMode(BuzzerPin,OUTPUT); //Defines pinBuz as an Output
        pinMode(buttonPin,INPUT); // Defines pinSwi as an input
              }
    void loop () {
      int buttonState; // To save the last logic state of the button
      
     buttonState = digitalRead(buttonPin); //Put the reading value of the switch on botao
      
      Serial.println(buttonState); //Shows the logic state of the input on Serial Monitor
      
      if (buttonState == 1) // Pressed button, logic State HIGH (5V)
      {
      digitalWrite(BuzzerPin,1); //Switch pressed, buzzer on
       Att=0;
      }else
      {
        if(Att==0){
          //delay(30000);//30s
          delay(5000);//5s
          Att++;
        }
      digitalWrite(BuzzerPin,0); //If the switch isn’t pressed, buzzer off.
      beep(349, 250); 
      delay(300);
      }
      delay(10); //reading delay
                }

 void beep(int note, int duration)
{
 //Play tone on buzzerPin
 tone(BuzzerPin, note, duration);
 
 
 delay(50);
 

}
