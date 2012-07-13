#requires pyserial (pip install pyserial) to work
#by Dan Reed 7/13/12

import serial

def loop():
	buttonPressed = ser.read()
	print buttonPressed


#this is pretty fragile, set it to whatever comms port your 'duino is hooked up to until I find a better solution
ser = serial.Serial('/dev/tty.usbmodem1421', 9600, timeout=1)
while(True):
	loop()




