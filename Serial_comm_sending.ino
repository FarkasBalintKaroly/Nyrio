// Communication between arduinos
// Servo controlling arduino mega side
// sending data through serial communication

void setup() {
  Serial1.begin(9600); // begin communication through serial 1 port, with 9600 baud rate
}

void loop() {
  Serial1.write("5"); // Sending integer through serial 1
  delay(1000); // wait for 1 sec

}
