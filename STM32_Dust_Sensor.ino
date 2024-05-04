#include <HardwareSerial.h>

#define RX3 PB11
#define TX3 PB10

HardwareSerial Serial3(RX3, TX3); // Set up Serial communication on USART3

void setup() {

  // put your setup code here, to run once:
  
  Serial.begin(9600); // Initializes the serial for the ZH07 module
  Serial3.begin(9600); // Initialize Serial3 (Serial Monitor)

}

void loop() {

  // put your main code here, to run repeatedly:
  
  //Serial3.print("Entered loop\n");

  // See Datasheet for more information
  if (Serial.available() >= 8) {
    //Serial3.print("Dust Sensor Data Available!\n");
    byte buffer[8];
    Serial.readBytes(buffer, 8);

    // Print the received data for debugging
    Serial3.print("Received data: ");
    for (int i = 0; i < 8; i++) {
      Serial3.print(buffer[i], HEX); // Print data in hexadecimal format
      Serial3.print(" ");
    }

    // Now you can interpret the data in the buffer based on your module's data format
    // Refer to your ZH07 module's datasheet for the correct interpretation of the bytes.
  
  }
  
  delay(500); // Wait 0.5 seconds
}
