#Arduino Serial Comms (with python!)

This repo contains the arduino sketch to run a physical button and connect it to your computer through the serial port. This allows for some pretty creative opportunities, I want to use it to have a one button deploy process for our server but you could make some footswitch or maybe a 'my boss is watching me' button... the possibilities are endless.


Hook up the button on pin #2 and an RGB LED on pins 6,5, and 3 (RGB, respectively) and just use the USB cable. you'll know it works if your LED lights up when you press the button.... should be pink.


fill the python scripts 'doSomeMagic()' function with whatever you want done and finally
run the python sniffer with python SerialSniffer.py 
