# Direction-Indicator-w-MSP430

MSP430 Launchpad – The Launchpad is given 3.3V Vcc and is connected to the ground. The pins P6.0, P6.1 of the Launchpad are the ADC10 analog input A0 and A1 respectively, which are used here to get the analog values of X and Y axis from the accelerometer which is connected to it. These analog values are the inputs to the 10 bit ADC which is onboard MSP430. Pins P3.0, P3.1, P3.2, P3.3, P3.4, P3.5, P3.6, P3.7 are the Rows and Pins P2.0, P2.1, P2.2, P2.3, P2.4, P2.5, P2.6, P2.7 are for the Red then the Pins P7.0, P7.1, P7.2, P7.3, P7.4, P7.5, P7.6, P7.7 are for the Green and lastly Pins P4.0, P4.1, P4.2, P4.3, P4.4, P4.5, P4.6, P4.7 are for the Blue.

ADXL335 – The ADXL335 is given 3.3V Vcc and is connected to ground. The ADXL 335 has 2 pins namely xout and yout  which gives out analog values in those directions based on the movement. These pins giving the analog output is connected to the ADC10 input pins of the Launchpad.

LED Screen - The LED Screen is given 3.3V Vcc and is connected to the ground. The pins 1,2,3,4,13,14,15,16 are connected to P3, pins 5,6,7,8,9,10,11,12 are connected to P7, pins 17,18,19,20,21,22,23,24 are connected to P4 and lastly 25,26,27,28,29,30,31,32 are connected to P2

Resistances - Resistances are using for the protect the LED's from overheating and corruption.
Cables - Cables are using for the true connections which are between MSP430 board, LED Screen and Accelerometer.

