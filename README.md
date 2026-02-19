# OE3WAS_LVGL_Examples
* [LVGL](https://lvgl.io/)-Beispiele mit [EEZ-Studio](https://www.envox.eu/) erzeugt,
* und der Versuch einer Dokumentation.

### Intention
* Mit [LVGL](https://lvgl.io/) können Bedienoberflächen (GUI) für unterschiedliche Touch-Displays erzeugt werden.
* Mit [EEZ-Studio](https://www.envox.eu/) kann diese Erstellung einfach mittels einer grafischen Oberfläche designed werden, welche die komplexen Programmsequenzen erzeugt.
* Das Design der GUI für eine Applikation kann damit getrennt von der Entwicklung der Applikation erfolgen. Es besteht eine eindeutige und einfache Schnittstelle.


---
### LoRa-Kommunikator auf LilyGo T-Deck
* verwendet wird ein [**LilyGo T-Deck**](https://lilygo.cc/en-us/products/t-deck) (ist zwar schon veraltet, war aber vorhanden und ist weit verbreitet)
* Nachfolgemodelle sollten gleichartig funktionieren, da das LVGL/EEZ-Studio Design lediglich die Bildschirmgröße (in Pixel) als Grundlage nimmt.
* Die Anpassung an andere Displays ist sehr leicht möglich.
* Ein Beispiel, bestehend aus mehreren Screens, die untereinander verknüpft werden können und eine einfache Basisstruktur darstellt.
* ➡️ https://github.com/karamo/OE3WAS_LVGL_Examples/tree/main/LoRa-Com-T-Deck

- [x] User Widget TopBar: grundlegende Infos über die Applikation und Basis-Buttons zur Steuerung. Erscheint grundsätzlich auf jeder Page.
- [x] Page Main: System, Info, ...
- [x] Page Symbols: zeigt die möglichen Icons in LVGL 9.4
- [ ] Page Menü: Auswahl der verschiedenen Screens
- [ ] Page Setup: Einstellung von verschiedenen Systemparamteren
- [ ] Page LoRa-Kommunikator: 
- [ ] Page LoRa-PingPong
  


---
***:copyright: 19.2.2026 by OE3WAS - Wolfgang***
