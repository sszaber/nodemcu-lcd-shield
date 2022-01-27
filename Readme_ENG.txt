HI. Its My first project on github.

I will show you how you can connect LCD SHIELD to NODEMCU.

schemat.jpg will shows you how you need to connect corectly wire and pins. 

Wery important things is power pins in nodemcu. You need connect VV pins from NODEMCU to 5V input in LCD SHIELD, but only LCD screen works on 5V. Analog A0 pin in NODEMCU read values only from 0-3,3V. Then you need to use resistor. 1 Kilo Ohm resistor fix problem.He reduces voltage and pin A0 work propertly.

I placed 2 programs who helps you configurate LCD shield to work. 

LcdShieldButtonsTest - shows values when you pressed buttons. Values can be used to read and creating actions in you own projects.

shield_ENG - simple menu who works on the readed values from the buttons.

i maded video tutorial on this link.