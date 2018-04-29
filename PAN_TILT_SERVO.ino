

#include <Servo.h>

Servo Pan;
Servo Tilt;
int Panpos;
int Tiltpos;
int hi;

void setup() {
  pinMode(7, OUTPUT);
  
  Pan.attach(10);
  Tilt.attach(11);
  Serial.begin(9600);
  DoPan(0);

    DoTilt(0);
    delay(1000);
}

void loop() {
  hi++;
DoPan(0);
DoTilt(0);



/*
digitalWrite(7, LOW);
delay(100);
DoPan(0);
DoTilt(500);
delay(300);
digitalWrite(7, HIGH);

for(int g=0;g<180;g++){
   DoPan(g);
    DoTilt(50);
    delay(30);
}

digitalWrite(7, LOW);
delay(100);
DoPan(0);
DoTilt(180-50);
delay(300);
digitalWrite(7, HIGH);

for(int g=180;g>0;g--){
   DoPan(180-g);
    DoTilt(180-50);
    delay(30);
}

*/

}

void DoTilt(int pos ) {
    int TiltAngle;
    TiltAngle = map(pos, 0, 180, 0, 149);
    Tilt.write(TiltAngle);
    Tiltpos = pos;
}

void DoPan(int pos) {
    int PanAngle;
    PanAngle = map(pos, 0, 180, 12, 180);
    Pan.write(PanAngle);
    Panpos = pos;
}

double PlanartoSphericalPan(double x, double y, double z) {
 
}

double PlanartoSphericalTilt(double x, double y, double z) {
 
}


