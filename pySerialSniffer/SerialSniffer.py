#requires pyserial (pip install pyserial) to work
#by Dan Reed 7/13/12

import serial

def loop():
	buttonPressed = ser.read()
	print buttonPressed


ser = serial.Serial('/dev/tty.usbmodem1421', 9600, timeout=1)
while(True):
	loop()




