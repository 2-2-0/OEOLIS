// Organic Evolution Of Light Into Sound
// OEOLIS_sensor, by 220

// GPLv2 license

// parameters
const int pin_sensor = A0;
const int pin_LED = 13;

const long serial_rate = 115200;
int serial_delay = 1;

void setup () {
  // Serial init
  Serial.begin (serial_rate);
  // pins init
  pinMode (pin_sensor, INPUT);
  pinMode (pin_LED, OUTPUT);
  
  // delay adjustment
  serial_delay/= 2;
}
void loop () {
  // turn LED on
  digitalWrite (pin_LED, HIGH);
  
  // read, convert and send...
  Serial.write (char (map (analogRead (pin_sensor), 0, 1024, 0, 255)));
  // wait a sec...
  delay (serial_delay);
  
  // turn LED off
  digitalWrite (pin_LED, LOW);
  // wait a sec...
  delay (serial_delay);
}
// spiritual: r=0 | material: r>0 | mind: r>=0
