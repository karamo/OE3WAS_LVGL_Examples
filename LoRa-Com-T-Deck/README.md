## Basis-Beispiel für 320x240 Display
⚠️ Die farbliche Gestaltung ist sehr individuell, kann aber in EEZ-Studio extrem einfach geändert/angepasst werden.  
➡️ Die Implementierung erfolgt auf einem **LilyGo T-Beam**.
- [x] **User Widget TopBar**
- [x] **Page Main**
- [x] **Page Symbols**
- [x] **Page Menü**
- [ ] Page Setup: Einstellung von verschiedenen Systemparamteren
- [ ] Page LoRa-Kommunikator: 
- [ ] Page LoRa-PingPong

---
### User Widget: <ins>**TopBar**</ins>
Enthält grundlegende Infos über die Applikation und Basis-Buttons zur Steuerung. Erscheint grundsätzlich auf jeder Page und muss nur 1x designed werden.  
* links **[Home]** Button
* rechts **[Menue]** Button
* dazwischen Anzeige des **CALL**, der **IP**-Adresse, **Uhrzeit** und **Akkuspannung** mit den jeweiligen Icons, die farblich die Gültigkeit anzeigen:
  rot = ungültig bzw. nicht vorhanden, grün = gültig, aktiv

![TopBar](https://github.com/karamo/OE3WAS_LVGL_Examples/blob/main/LoRa-Com-T-Deck/images/Widget_TopBar.PNG)

---
### Page: <ins>**Main**</ins>
  + Widget **TopBar** + `TextArea` (rot umrahmter Bereich, indem Systemmeldungen ausgegeben werden)

  ![TopBar](https://github.com/karamo/OE3WAS_LVGL_Examples/blob/main/LoRa-Com-T-Deck/images/Page_Main.PNG)

---
### Page: <ins>**Menü**</ins>
Auswahl der verschiedenen Pages
* [RXmessages] [TXmessage] zusammengefasst in [Chat]
* [PingPong] Funktionalität
* [Setup]
* [Symbols]

  ![TopBar](https://github.com/karamo/OE3WAS_LVGL_Examples/blob/main/LoRa-Com-T-Deck/images/Page_Menue.PNG)

---
### Page: <ins>**Setup**</ins>
* Einstellung von Systemparametern
* ⚠️ noch nicht implementiert

  ![TopBar](https://github.com/karamo/OE3WAS_LVGL_Examples/blob/main/LoRa-Com-T-Deck/images/Page_Setup.PNG)

---
### Page: <ins>**Chat**</ins>
⚠️ noch nicht implementiert

  ![TopBar](https://github.com/karamo/OE3WAS_LVGL_Examples/blob/main/LoRa-Com-T-Deck/images/Page_Chat.PNG)

---
### Page: <ins>**PingPong**</ins>
⚠️ noch nicht implementiert

  ![TopBar](https://github.com/karamo/OE3WAS_LVGL_Examples/blob/main/LoRa-Com-T-Deck/images/Page_PingPong.PNG)

---
* ...

---
### Page: <ins>**Symbols**</ins>
zeigt die in LVGL 9.4 vorhandenen und darstellbaren Icons

![TopBar](https://github.com/karamo/OE3WAS_LVGL_Examples/blob/main/LoRa-Com-T-Deck/images/Page_Symbols.PNG)

---
⚠️➡️✔️✅🔹

---
***:copyright: 19.2.2026 by OE3WAS - Wolfgang***





