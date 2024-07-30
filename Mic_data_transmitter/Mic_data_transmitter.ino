void setup() {
  // Set up the microphone pin
  const int micPin = A3;

  // Set up the serial communication
  int baudRate = 240000; // Set the desired baud rate
  Serial.begin(240000);
}
// Define a string variable to hold the analog voltage reading
String s;

void loop() {
  // Read the analog voltage from pin A0 and convert it to a string
  s = String(analogRead(A3));

  // Add leading zeros to the string if necessary to make it 4 characters long
  //If string length is less than 2, the 3 if loops ensure that 3 leading zeros are added and length becomes 4
  if (s.length() < 2) {  
    Serial.print(0);
  }

//If string length is less than 3, the 2 if loops ensure that 2 leading zeros are added and length becomes 4
  if (s.length() < 3) {
    Serial.print(0);
  }

  //If string length is less than 4, the 1 if loop ensure that 1 leading zero is added and length becomes 4
  if (s.length() < 4) {
    Serial.print(0);
  }
  
  // Send the analog voltage reading via serial communication
    Serial.println(s);
}