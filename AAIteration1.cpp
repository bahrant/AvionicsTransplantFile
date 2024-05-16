
/* 

Index:
1. " ********* " means please check back on this
2. method details in README.txt
---------------------------------------------

 Name:           Ambition Avionics c++ file
 Summary:        Code is written to run on a Teensy 4.1 to preform the functions of an avionics subsytem 
 Contributors:   Bahran T, Miguel V, Andre H, Tarandeep S, Micheal B.		 
 Date:           05/14/2024



 Revisions on 05/14 : 
   set up genera


*/ 


// Import necessary libraries 


#include <vector>
#include "Arduino.h"
#include <Wire.h>
#include <string>

// **** Necessary dependencies to download
#include "Adafruit_ICM20948.h"
#include "Adafruit_ICM20X.h"
#include <Adafruit_Sensor.h>
#include "Adafruit_BMP3XX.h"
#include "Adafruit_ADXL375.h"
#include <Wire.h>

//******


using namespace std;

// *****! Define constants (Set up 2 more i^2C busses and one SPI) 


#define ICM_SDA 17
#define ICM_SCL 16

#define BMP_SDA 18
#define BMP_SCL 19

#define ACC_SDA 25
#define ACC_SCL 24


// Funciton prototypes 

bool turnOn(); 
bool apogeeReached(); 
string identify(); 
bool Await(); 
void admin(); 
void deployCharges(); 
string mhz433();



// Global variables 

vector<string> errorCodes; 

Adafruit_BMP3XX bmp;   // barometric pressure sensor
Adafruit_ICM20948 icm; // Inertial measurment unit sensor 
Adafruit_ADXL375 acc   // Accelerometer

wire.begin();
wire1.begin();
wire2.begin();


void setup() {




}



void loop() {

	if (turnOn()) {

		errorCodes.pushBack(string.isEmpty(Identify())); 




	}


}




//----------- Function Definitons ----------------------------

bool turnOn() {

	// set up handshake mechanism with groundstation 

	if (Await()) {    // if returns true, exec

	}


}

bool apogeeReached() {


}
string identify() {


}
bool Await() {

	bool flag = true; // returned value 
	string message;


	while (433mhz()) {


		}
	


}

bool mhz433(Sti){

	//Method awaits on groundstation packet 

	string target = "whatsThePassword?"; 

	string message = "";

	while (/*function to invoke promiscuous mode*/) {

		message = /* function that returns pmscs value*/

			if (message = target) {
				return true; 
			}
	}

}

void admin() {



}

void deployCharges() {


}


//---------  MAINTANCE METHODS  --------------------

/*
* Methods to add: 
* transmit method
* promiscuous mode method
* 
* 
* 
* Notes: 
* 1. dont forget to write an index at the top i.g. Lines 23 find() is defined, etc..
*/