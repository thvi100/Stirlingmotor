#define PIN_LED_DETECTOR A2
#define sensorPin A0
#define sensor A5

// [0..1023] = [dark..bright]
const unsigned int SENSOR_SENSITIVITY = 7;

// e.g. number of blades in a fan
const byte INTERUPTIONS_PER_REVOLUTION = 5;

// in ms
const unsigned long CALCULATE_INVERVAL = 2500;
bool sensorStatus = false;
unsigned int brightness = 0;
float interruptions= 0, revolutions = 0, lastCalculateTime, lst;
int fq=0;
float rpm = 0;
int mol;
float sensorValue;
int Vs = 5;

// Def Temperatur Sensor
int reading;
float temperatureC;

void setup()
{
  Serial.begin(9600);
  lastCalculateTime = millis();
  lst = millis();
  pinMode(sensor, INPUT);


  }
void loop()
{ 
  reading = analogRead(sensorPin);
  sensorValue = analogRead(sensor);


  if (millis() - lastCalculateTime > 2500) {
    revolutions = interruptions / INTERUPTIONS_PER_REVOLUTION;
    rpm = revolutions*60 / (2500 / 1000);
    lastCalculateTime = millis();


    // show sensor brightness
    Serial.print("B = " + (String)brightness);
    // show amount of interruptions of the sensor
    Serial.print("; I = " + (String)interruptions);
    // show amount of revolutions
    Serial.print("; R = " + (String)revolutions);
    // show rpm = "revolutions per minute"
    Serial.print("; T = " + (String)((reading * (5.0 / 1024.0) - 0.5) * 100));
    Serial.println("; " + String(rpm) + " RPM");

    revolutions = 0;
    interruptions = 0;
    
    }
  brightness = analogRead(PIN_LED_DETECTOR);
  //Serial.println(brightness);

  if (sensorStatus == false && brightness < SENSOR_SENSITIVITY) {
    interruptions++;
    
    fq++;
    mol = fq % 5;
    switch(mol){
      case 1:
        Serial.println("V1 = 3205,98");
        break;
      case 2:
        Serial.println("V2 = 21891,7");
        break;
      case 3:
        Serial.println("V3 = 34653.74");
        break;
      case 4:
        Serial.println("V4 = 26726.47");
        break;
      case 0:
        Serial.println("V5 = 6429,16, ft");
        break;
      }
    sensorStatus = true;
    }
    if (sensorStatus == true && brightness > SENSOR_SENSITIVITY) {
      sensorStatus = false;
    }
    if (millis() - lst > 10) {
      lst = millis();
      // Druck in kPa rechnen
      Serial.println((float)(((sensorValue/100)*5)/Vs - (5/2)));
    }

}



