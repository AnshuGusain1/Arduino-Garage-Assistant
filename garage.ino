
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif
int trig = 8;
int echo = 9;
#define PIN 7
long lecture_echo;
long cm;
int x = 0;

int red;
int yellow = red+40;
int green =yellow;

#define NUMPIXELS 30
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

#define DELAYVAL 1


void setup() {
  pinMode(6, INPUT);
  pinMode(trig, OUTPUT);
  digitalWrite(trig, LOW);
  pinMode(echo, INPUT);
  Serial.begin(9600);
  pixels.begin();
  pixels.clear();
  for(x=0;x<NUMPIXELS;x++){
    pixels.setPixelColor(x,pixels.Color(0,255,0));
  }
  pixels.show();
}

void loop() {
read();
while (cm<71 && cm>29){
  
  int mapped = map(cm,30,70,0,30);
  pixels.clear();
  for(x=0;x<=30-mapped;x++){
    pixels.setPixelColor(x,pixels.Color(0,255,255));
    read();
  }
  pixels.show();
  read();

}


while(cm<30){
  for(x=0;x<30;x++){
    pixels.setPixelColor(x,pixels.Color(255,0,0));
    read();
  }
  pixels.show();
}
while(cm>70 && cm<200){
  for(x=0;x<30;x++){
    pixels.setPixelColor(x,pixels.Color(0,255,0));
    read();
  }
  pixels.show();
}
while(cm>=200){
  for(x=0;x<30;x++){
    pixels.setPixelColor(x,pixels.Color(0,0 ,0));
    read();
  }
  pixels.show();
}

}


void read() {
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  lecture_echo = pulseIn(echo, HIGH);
  cm = lecture_echo / 58;

}
