CZEŚĆ. To mój pierwszy projekt na github.

Pokażę Ci jak podłączyć LCD SHIELD do NODEMCU.

schemat.jpg pokaże Ci, jak prawidłowo podłączyć przewód i szpilki.

Bardzo ważne są piny zasilania w nodemcu. Musisz podłączyć piny VV z NODEMCU do wejścia 5V w LCD SHIELD, ale tylko ekran LCD działa na 5V. Analogowy pin A0 w NODEMCU odczytuje wartości tylko z zakresu 0-3,3V. Następnie musisz użyć rezystora.Rezystor 1 Kilo Ohm naprawi problem. Zmniejsza napięcie i działa poprawnie pin A0.

Umieściłem 2 programy, które pomagają skonfigurować ekran LCD do pracy.

LcdShieldButtonsTest — pokazuje wartości po naciśnięciu przycisków. Wartości mogą służyć do odczytywania i tworzenia akcji we własnych projektach.

shield_ENG - proste menu, które działa na odczytanych wartościach z przycisków.

zrobiłem samouczek wideo pod tym linkiem.
https://youtu.be/cQhwIugPLeU
