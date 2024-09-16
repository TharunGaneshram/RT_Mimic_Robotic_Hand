#include "BluetoothSerial.h"
#include "HardwareSerial.h"

short cmd;
int ledPin = 2;

HardwareSerial SerialPort(2);
BluetoothSerial serialBT;

void setup() {
  // configure and start bluetooth connection
  serialBT.begin("Esp32-BT");
  SerialPort.begin(115200, SERIAL_8N1, 16, 17);

  // start serial port
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // if bluetooth data is available, read it and send it
  if(serialBT.available()){
    cmd = serialBT.read();
    SerialPort.write(cmd);
  }
}
