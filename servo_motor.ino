#include <Servo.h>

// Servo motorlar için nesneler oluşturuluyor
Servo servo1;
Servo servo2;

// Joystick pinleri
int joyX = 0;
int joyY = 1;
  
int servoVal;
  
void setup() 
{ // Servo motorlar pinlere bağlanıyor
  servo1.attach(3);
  servo2.attach(5);
}
  
void loop()
{
  
  // X ekseninden joystick değeri okunuyor
  servoVal = analogRead(joyX);
  
  // Okunan değer 0-1023 aralığından 0-180 aralığına alınıyor
  servoVal = map(servoVal, 0, 1023, 0, 180);
  
  // Servo motorun pozisyonu belirlenen değere ayarlanıyor
  servo1.write(servoVal);

  // Y ekseninden joystick değeri okunuyor
  servoVal = analogRead(joyY);
  
  // Okunan değer 0-1023 aralığından 0-180 aralığına alınyot
  servoVal = map(servoVal, 0, 1023, 0, 180);
  
  // Servo motorun pozisyonu belirlenen değere ayarlanıyor
  servo2.write(servoVal);

  // Küçük bir bekleme süresi ekleniyor
  delay(15);    
}

