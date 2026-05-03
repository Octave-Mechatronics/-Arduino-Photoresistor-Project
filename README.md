# 🌞 Arduino Projekt mit Fotowiderstand (LDR)

## 📌 Beschreibung
In diesem Projekt wird ein **Fotowiderstand (LDR)** verwendet, um die Umgebungshelligkeit zu messen und zwei LEDs zu steuern.

- 🔴 **Rote LED**: leuchtet bei geringer Helligkeit (Dunkelheit)  
- 🟢 **Grüne LED**: leuchtet bei hoher Helligkeit  

## ⚙️ Verwendete Komponenten
- Arduino Uno
- Fotowiderstand (LDR)
- Widerstand (10kΩ)
- 1x rote LED
- 1x grüne LED
- Breadboard
- Jumper-Kabel

## 🎥 Demonstration
![Demo](media/demo.mp4)

*(Falls das Video nicht angezeigt wird, kann alternativ ein YouTube-Link verwendet werden.)*

## 💻 Code
Der Code befindet sich im Ordner: `Photoresistor_may3c.ino`

## 🔧 Funktionsweise
Der Fotowiderstand misst die Lichtintensität und liefert einen analogen Wert.

Dieser Wert wird mit `analogRead()` ausgelesen und mit einem definierten Schwellenwert verglichen:

- Liegt der Wert **unter dem Schwellenwert** → geringe Helligkeit → 🔴 LED EIN  
- Liegt der Wert **über dem Schwellenwert** → hohe Helligkeit → 🟢 LED EIN  


## 📈 Erweiterungsmöglichkeiten
- Dynamischer Schwellenwert mit Potentiometer
- Anzeige der Werte im Serial Monitor oder auf einem LCD
- Einsatz als automatisches Lichtsystem

## 🚀 Lernergebnisse
- Nutzung eines analogen Sensors (LDR)
- Arbeiten mit `analogRead()`
- Vergleich von Messwerten (Threshold)
- Steuerung mehrerer Ausgänge (LEDs)

- ## 💡 Motivation
Dieses Projekt wurde im Rahmen meines Selbststudiums im Bereich Embedded Systems entwickelt.
