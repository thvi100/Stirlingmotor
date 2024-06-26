Einleitung
Das Ziel des Versuchs ist den Kreisprozess der Stirling Maschine zu beschreiben und unter Verwendung der erhobenen Messdaten ihren Wirkungsgrad zu bestimmen. Bezüglich dessen wurden über verschiedene Verfahren die Variablen des Idealen Gasgesetzes P (Druck), V (Volumen) und n (Stoffmenge) sowohl für die „Obere-“ als auch für die „Untere-Kammer“ gemessen oder rechnerisch bestimmt. Der Raum des Motors ist durch eine bewegende Platte getrennt, was die Betrachtung als zwei Kammern ermöglicht. Über die Integration der Druckdifferenz mal der Fläche der auf und ab gehenden Mittelplatte, welche die beiden Kammern trennt, lässt sich die Leistung und der Wirkungsgrad der Maschine berechnen. Im Folgenden wird geschildert, in welchen Schritten die Daten erhoben wurden und wie auf die Leistung geschlossen wurde. 

Material und Methoden des Versuchs
1.	Volumen bestimmung
2.	Ideales Gasgesetz 
3.	Van der Waals Gleichung 
4.	Berechnung der Kolbenposition und Leistung
5.	Fehlerfortpflanzung
1. Volumen bestimmung 
Das Volumen der beiden Kammern ist abhängig von der sich bewegenden Mittelplatte und die Plattenposition von der Position des Rades. Mittels einer Lichtschranke kann somit das Volumen in 7 verschieden Positionen pro Umdrehung des Rades genau bestimmt werden. (V1 = 3205.98 mm3,     Vmin = 2378.40 mm3, V2 = 21891.7mm3, V3 = 34653.74mm3, Vmax= 35786.21 mm3, V4 = 26726.47 mm3 und V5 = 6429.16 mm3). Unter der Annahme, dass die Drehfrequenz des Rades gleichmäßig verläuft, lassen sich die restlichen Volumenwerte mittels einer Linearen Funktion ermitteln.  
![image](https://github.com/thvi100/Stirlingmotor/assets/92692007/cd1044ec-407d-41fe-bd62-ced734c053f6)
![image](https://github.com/thvi100/Stirlingmotor/assets/92692007/093882c7-221a-4131-8e6a-8cda317ee0a8)
2. Druck bestimmung in der unteren Kammer (P2)
Die Bestimmung des Druckes in der unteren Kammer (P2) erfolgt über das Ideale Gasgesetz                   𝑝 ⋅ 𝑉 = 𝑛 ⋅ 𝑅 ⋅ 𝑇. Hierbei steht R für die Gaskonstante 𝑅 = 8.314 J/(mol ⋅ K) und T für die Durchschnittstemperatur der oberen und der unteren Außenplatte der Stirling Maschine T=  (  T1⋅T2 )/2. Der Druck in der oberen Kammer wurde mittels eines Druckdifferenz Sensors gemessen, wodurch mittels des Idealen Gasgesetzes auf die Stoffmenge n1 in der oberen Kammer mit n1=  (  P1⋅V1 )/(R⋅T) geschlossen werden kann. Über das Gesamtvolumen 𝑉 = 𝜋 ⋅ 𝑟2 ⋅ ℎ und die Gesamtstoffmenge        n=  (  P(Luft)⋅V )/(R⋅T), lässt sich nun über den Wert der Oberen-Kammer der Wert für die Untere-Kammer für das Volumen (V2) und die Stoffmenge (n2) bestimmen. Somit folgt für das Volumen in der Unteren-Kammer 𝑉2 = 𝑉ges – 𝑉1 und mittels des Ideale Gasgesetz für die Stoffmenge 𝑛2 = 𝑛 − 𝑛1. Durch eine erneute Umstellung des Idealen Gasgesetzes kann nun mittels P2=  (  n2 ⋅ R ⋅T )/V2 auf P2 geschlossen werden. 
3. Van der Waals Gleichung 
Der Realgasfaktor(z) beschreibt den Unterschied zwischen dem molaren Volumen eines realen Gases zu dem eines Idealen Gases bei gleichem Druck und Temperatur.
Ein ideales Gas hat einen Realgasfaktor von 1, daher kann ein Gas mit einem Realgasfaktor von 1 als ideales Gas betrachtet werden kann. 
Luft hat bei einem Druck von 1000 hPa und Temperaturen von 300 – 350 Kelvin einen Realgasfaktor von 1.
In der Stirling-Maschine herrscht ein Druck von 1033 – 1053 hPa und Temperaturn von 300 - 360 Kelvin.
Bei diesen Bedingungen weicht Luft als ideales Gas weniger als 1% vom realen Gas ab.
Daher ist es ausreichend die Luft in der Stirling-Maschine durch das ideale Gasgesetz und nicht durch die Van-der-Waals-Gleichung oder Ableitungen dieser zu beschreiben.
Auch wenn die Van der Waals Gleichung für eine bestimmung in deinem nicht Idealen Raum, theoretisch besser geeignet ist, haben wir uns aufgrund eines Ergebnis unterschieds, welcher mit 10-6 geringer ist als der Fehler, welcher von unseren Messsensoren ausgeht, gegen diese Formel entschieden. 
4. Berechnung der Kolbenposition und Leistung 
Zur Bestimmung der Leistung ist es erforderlich, die Position der sich bewegenden Platte und die zu dem Zeitpunkt wirkenden Kraft zu den verschiedenen Zeitpunkten zu kennen. Mit Position ist hierbei die höher der Platte gemeint, wodurch sie mittels hPlatte = (Vunten + VPlatte)/(ABodenplatte) = (Vunten + 13258 mm3)/(3455,64*10-3 mm2) berechnet werden kann. Die wirkende Kraft in Abhängigkeit vom Plattenstand ergibt sich hierbei durch F = Druckdifferenz der Oberen- und Unteren Kammer mal der Fläche der bewegenden Platte = PDifferenz(x)*APlatte. Durch die Integration innerhalb eines Kreisprozesses mit W=∫_0^hmax▒〖dP(h)〗⋅A dh kann nun die verbrachte Arbeit innerhalb einer Rotation ermittelt werden. Aufgrund dessen, dass Leistung Arbeit pro Zeit ist lässt sich nun mit P=  ( W )/t die Leistung bestimmen. 
5. Fehlerfortpflanzung 
Wir haben die Fehlerberechnung von Gauß genutzt. 
![image](https://github.com/thvi100/Stirlingmotor/assets/92692007/c1a795f3-f04c-4497-bae6-58d7fbdbd138)
![image](https://github.com/thvi100/Stirlingmotor/assets/92692007/015a4872-f954-41c0-aff3-b6d7bd08a8de)
Als erstes beginnen wir mit der Fehlerberechnung des Volumens. Da wir zum Berechnen des Volumens die Höhen mit einem digitalen Messschieber gemessen haben, nutzen wir dessen Messunsicherheit von 0,01 mm. Unser Fehler für das Volumen des Raumes liegt bei 58,84 mm3 und der Platte bei 40,75 mm3. Beim Addieren der beiden Fehler ergibt sich bei uns somit ein Fehler von 71,67 mm3 für das Gesamtvolumen (Vgesamt). Das Volumen in der oberen Kammer (Voben) ist von der jeweiligen Höhe der Platte abhängig. Hierbei gehen wir wie folgt vor:
-> Volumen Rechnungen 

Um die Fehlerfortpflanzung für die darauf folgenden Formeln zu bestimmen, benötigt man die Messunsicherheiten des Druck- und Temperatur Sensors. Der von uns genutzte Druck Sensor (Name) hat eine Messunsicherheit von 2,5%, also eine Abweichung von +/- 0,112 und der Temperatur Sensor (Name) hat eine Abweichung von 0,1 °Celsius. Um die Fehlerberechnung durchführen zu können, haben wir die folgenden Formeln partiell abgeleitet:
![image](https://github.com/thvi100/Stirlingmotor/assets/92692007/96193f0d-609a-4ae2-9229-c324d56eff84)
![image](https://github.com/thvi100/Stirlingmotor/assets/92692007/ae603fe2-02a9-4b31-a9fa-df9d0a84a68d)
![image](https://github.com/thvi100/Stirlingmotor/assets/92692007/2e7aec6a-bf64-454a-8a02-8fe6195dba75)
