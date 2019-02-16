import serial
portName = '/dev/tty.usbmodem14101'

ser = serial.Serial(portName, 9600)

while True:
   print ser.readline()
