HI. Its My first project on github.
I will show you how you can connect LCD SHIELD to NODEMCU.

schemat.jpg will shows you how you need to connect corectly wire and pins. 

Wery important things is power pins in nodemcu. You need connect VV pins from NODEMCU to 5V input in LCD SHIELD, but only LCD screen works on 5V. Analog A0 pin in NODEMCU read values only from 0-3,3V. Then you need to use resistor. 1 Kilo Ohm resistor fix problem.He reduces voltage and pin A0 work propertly.

I placed 2 programs who helps you configurate LCD shield to work. 

LcdShieldButtonsTest - shows values when you pressed buttons. Values can be used to read and creating actions in you own projects.

shield_ENG - simple menu who works on the readed values from the buttons.

i maded video tutorial on this link.
https://youtu.be/cQhwIugPLeU
----------------------------------------------------------------------------------------------------------
CZEŚĆ. To mój pierwszy projekt na github.
Pokażę Ci jak podłączyć LCD SHIELD do NODEMCU.

schemat.jpg pokaże Ci, jak prawidłowo podłączyć przewód i szpilki.

Bardzo ważne są piny zasilania w nodemcu. Musisz podłączyć piny VV z NODEMCU do wejścia 5V w LCD SHIELD, ale tylko ekran LCD działa na 5V. Analogowy pin A0 w NODEMCU odczytuje wartości tylko z zakresu 0-3,3V. Następnie musisz użyć rezystora.Rezystor 1 Kilo Ohm naprawi problem. Zmniejsza napięcie i działa poprawnie pin A0.

Umieściłem 2 programy, które pomagają skonfigurować ekran LCD do pracy.

LcdShieldButtonsTest — pokazuje wartości po naciśnięciu przycisków. Wartości mogą służyć do odczytywania i tworzenia akcji we własnych projektach.

shield_ENG - proste menu, które działa na odczytanych wartościach z przycisków.

zrobiłem samouczek wideo pod tym linkiem.
https://youtu.be/cQhwIugPLeU
