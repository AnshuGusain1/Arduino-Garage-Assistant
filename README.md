# Arduino-Garage-Assistant
Arduino Based Garage parking assistant 


-------------------------WHAT THIS IS---------------------------

This is a garage parking assistant 

While the car is outside of the garage(considered 200 CM again from sensor), the lights are all off

When the car is within 70 and 200 CM of the sensor, all the lights are Green.

When the car is within 70 and 30 CM of the sensor, the lights travel upwards relative to the distance from the sensor.
(70 CM --> light is at bottom of LED strip; 30 CM --> light is at top of LED strip)

When the car is less then 30 CM from the sensor, all lights should be Red.


-------------------------SETUP----------------------------------


Make sure to install arduino Adafruit_NeoPixel library using arduino IDE before running code

Before printing case, make sure to generate supports for the bottom arduino case. Supports not needed on lid

Once printing is complete, drill holes into the outer 4 mounting points on the arduino case 

Drill the holes in the arduino mounting area in the case and screw the arduino in

Glue ultrasonic sensor (HC-SR04) upside down on the sensor mount above the arduino case

To mount Arduino to wall on garage, use 2-4 pins on the wall.

Stick addressable LED strip to wall vertically above arduino.


ALL WIRING IS IN WIRING DIAGRAM 


-----------------------------CAVIATS------------------------------

DO NOT LEAVE THIS SYSTEM PLUGGED IN 24/7; ARDUINO HEATS UP WHILE OPERATING!!

To mitigate issue of over heating, install light bulb outlet in garage bulb, and run the cable to arduino.
When garage opens, power runs to arduino

Distances can be changed in code


