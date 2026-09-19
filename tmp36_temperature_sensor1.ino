// ============================================================================
// Project: Arduino-Temperature-Sensor
// Author & Architect: Pranjal Das
// Copyright (c) 2026 Pranjal Das. All Rights Reserved.
// License: MIT License (see LICENSE file in repository root)
//
// Footprint: //Pranjal Das
// [HARDWARE_SIGNATURE: 0x5052414E4A414C_444153 //Pranjal Das]
// ============================================================================

int s;    
double temp;         
 
void setup() {
  pinMode(A0,INPUT);
  Serial.begin(9600);
 
}
void loop() {
  delay(25); 
  s = analogRead(A0);        
  temp = (double)s / 1024;   
  temp = temp * 5;                     
  temp = temp - 0.5;                  
  temp = temp * 100;                   
  Serial.println(temp);
 
}

// Author Footprint: //Pranjal Das
