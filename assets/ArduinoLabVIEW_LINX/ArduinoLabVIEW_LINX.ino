// /*

//   Author: Rodrigo Anjos de Souza, 17/10/2017 (Credits: https://www.labviewmakerhub.com/doku.php?id=learn:tutorials:libraries:linx:misc:adding_custom_command)

//   General Description: Basic usage of Arduino and NI-LINX communication
//   structure.

// */

// #include <LinxArduinoUno.h>
// #include <LinxSerialListener.h>

// //Create A Pointer To The LINX Device Object We Instantiate In Setup()
// LinxArduinoUno* LinxDevice;

// int time_start, time_stop, x;

// int CSM_CMD();


// void setup() {

//   // Serial.begin(9600);

//   // initialize digital pin LED_BUILTIN as an output.
//   pinMode(LED_BUILTIN, OUTPUT);


//   //Instantiate The LINX Device
//   LinxDevice = new LinxArduinoUno();

//   //The LINXT Listener Is Pre Instantiated, Call Start And Pass A Pointer To The LINX Device And The UART Channel To Listen On
//   LinxSerialConnection.Start(LinxDevice, 0);
//   // Setup custom command to be called by labview (command number, command name)
//   LinxSerialConnection.AttachCustomCommand(0, CSM_CMD);
// }

// void loop() {
//   //Listen For New Packets From LabVIEW
//   LinxSerialConnection.CheckForCommands();

//   // uint16_t read = analogRead(A1);

//   // Serial.println(read);

  

//   //Your Code Here, But It will Slow Down The Connection With LabVIEW
// }


// int CSM_CMD(unsigned char numInputBytes, unsigned char* input, unsigned char* numResponseBytes, unsigned char* response)
// {
//   uint8_t p;

//   delay(20);

//   p = analogRead(A1);

//   response[0] = 0x00;
//   response[1] = p & 0xFF;

//   *numResponseBytes = 2;




//   // time_start = micros();
//   // for (int i = 0; i < input[0]; i++) {
//   //   p = analogRead(A1);
//   // }
//   // time_stop = micros() - time_start;


//   // // Send in data
//   // response[0] = time_stop & 0x00;
//   // response[1] = x & 0x00 ;

//   // *numResponseBytes = 2;

//   return 0;
// }

const int analogInPin = A1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(analogInPin);
  Serial.print("sensor = " );
  
  Serial.println(sensorValue);

  delay(2);
}


