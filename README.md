<div align="center">

# 👀 NFC Eye Keychain

**A tiny keychain with animated OLED eyes, an onboard NFC chip, and a rechargeable battery — built to be as small as possible.**

![PCB](https://img.shields.io/badge/PCB-EasyEDA-red)
![Made with](https://img.shields.io/badge/made%20with-%E2%9D%A4-red)
![MCU](https://img.shields.io/badge/MCU-ATtiny1616-blue)

<img src="images/Screenshot 2026-09-26 190200.png" alt="Photo of the finished keychain" width="480">
<img src="images/Screenshot 2026-09-26 190208.png" alt="Photo of the finished keychain" width="480">


</div>

---

## ✨ Overview

This is a pocket-sized keychain that blinks a pair of animated eyes on a small OLED screen. An onboard NFC chip can wake it from deep sleep the instant a phone taps it, keeping battery drain to a minimum the rest of the time. No charging port — the battery unplugs for external charging to keep the whole thing as small and simple as possible.

> ⚠️ **No firmware yet** — no code has been written. Eye animation, NFC handling are all still TODO.

## 🔧 Hardware

| Part | Component |
|---|---|
| 🧠 MCU | ATtiny1616-MNR (VQFN20) |
| 🖥️ Display | 0.96" OLED, SSD1306, I2C  |
| 📡 NFC | NTAG I2C+ (field-detect wake, shared I2C bus) |
| 🔋 Battery | 100mAh 3.7V LiPo, JST-PH connector |
| ⚡ Charging | External only — no onboard charge circuit |
| 🔘 Power switch | SPST slide switch |
| 🔌 Programming | UPDI (3-pad header: PA0, VDD, GND) |

## 💰 Cost 

JLCPCB- PCBA €47.04

AMAZON- €43.71 

TOTAL =  €90.75  and  $103,39

<table>
<tr>
<td><img src="images/Screenshot 2026-09-26 185511.png" width="380"><br><sub></sub></td>
<td><img src="images/Screenshot 2026-09-26 185908.png" width="380"><br><sub></sub></td>
</tr>
</table>


## 📐 Schematics

<table>
<tr>
<td><img src="images/SCH_Schematic1_2026-09-26.pdf" width="380"><br><sub></sub></td>
<td><img src="images/Screenshot 2026-09-26 202242.png" width="380"><br><sub></sub></td>
</tr>
</table>

## 📁 Repo structure

```
├── schematics/   EasyEDA exports / schematic images
├── firmware/     ATtiny1616 firmware (Arduino/megaTinyCore)
├── pcb/          PCB layout files
└── images/       photos and renders
```


## 📄 License

- **Firmware**: [MIT License](LICENSE-MIT) — free to use, modify, and share, just keep the copyright notice
