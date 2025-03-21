//Eingänge/Ausgänge festlegen
// Bibliothek werden hier gelesen/Variablen erstellt

#define red 12          // red = rote LED
// const int red = 12;   Macht das selbe wie Zeile 4



void setup() {
pinMode(red, OUTPUT);

}

void loop() {
  digitalWrite(red, HIGH);
  delay(1000);        //1000ms = 1 Sekunde
  digitalWrite(red, LOW);
  delay(1000);
}
