# 💡 Automatic Light Control with LDR (Arduino)

This project uses a **light-dependent resistor (LDR)** to automatically turn an LED **ON** in the dark and **OFF** in bright light.  
It demonstrates simple analog sensing and digital control with Arduino.

---

## 🧠 Description

- The **LDR** measures ambient light intensity using the analog input pin **A0**.  
- The value from the LDR is compared to a threshold (`ciemno = 400`).  
- If the light level falls **below** this threshold (it’s dark), the LED turns **ON**.  
- If the light level is **above** the threshold (bright environment), the LED turns **OFF**.  
- The measured light value is also displayed in the **Serial Monitor**.

---

## ⚙️ Hardware Requirements

- Arduino UNO / Nano or compatible board  
- LDR (photoresistor)  
- 10 kΩ resistor (for voltage divider)  
- LED  
- 220 Ω resistor  
- Jumper wires and breadboard  

---

## 🔌 Connections

| Component | Arduino Pin | Description |
|------------|--------------|-------------|
| LDR + 10kΩ resistor (voltage divider) | A0 | Analog input for light level |
| LED | D2 | Output indicator (ON in darkness) |
| LDR other end | 5V | Power for LDR |
| Resistor other end | GND | Ground reference |
| Common ground | — | All GNDs connected together |

**Voltage divider connection:**  
