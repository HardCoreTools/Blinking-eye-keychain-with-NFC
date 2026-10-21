<div align="center">

# NFC Eye Keychain

**A tiny keychain with animated OLED eyes, an onboard NFC chip, and a rechargeable battery — built to be as small as possible.**

![PCB](https://img.shields.io/badge/PCB-EasyEDA-red)
![Made with](https://img.shields.io/badge/made%20with-%E2%9D%A4-red)
![MCU](https://img.shields.io/badge/MCU-ATtiny1616-blue)

<img src="images/Screenshot 2026-09-26 190200.png" alt="Photo of the finished keychain" width="480">
<img src="images/Screenshot 2026-09-26 190208.png" alt="Photo of the finished keychain" width="480">
</div>

---

##  Overview

**What is that?**

This is a pocket-sized keychain that blinks a pair of animated eyes on a small OLED screen. An onboard NFC chip that can open a website of your choise the instant a phone taps it. No charging port — the battery unplugs for external charging to keep the whole thing as small and simple as possible.

## Hardware

| Part | Component |
|---|---|
|  MCU | ATtiny1616-MNR (VQFN20) |
|  Display | 0.96" OLED, SSD1306, I2C  |
|  NFC | NTAG I2C+ (field-detect wake, shared I2C bus) |
|  Battery | 100mAh 3.7V LiPo, JST-PH connector |
|  Charging | External only — no onboard charging |
|  Power switch | SPST slide switch |
|  Programming | UPDI (3-pad header: UPID, VDD, GND) |


## Cost for the pcb 


| Name          | Description                                                                   | Price  | Shipping |
| ------------- | ----------------------------------------------------------------------------- | ------ | -------- |
| Componenets   | Components from LCSC. Detailed breakdown [here](/FOR_HACKCLUB/export_cart_20261005_215503.csv) | $13.85  | $14.45   |
| PCB+Stencil   | PCB and stencil from JLC                                                      | $11.32 | $20.18   |
| **Sub Total** |                                                                               | $25.17 | $34.63   |
| **Total**     |                                                                               | $59.8  |          |


| Name          | Description                                                                   | Price  | Shipping |
| ------------- | ----------------------------------------------------------------------------- | ------ | -------- |
|  5879 UPDI Friend  | from aliexpress | $3.49  | $0   |
| Original 0.96 inch OLED IIC Serial White OLED Display Module 128X64 I2C  | Yellow Blue 5pcs | $9.05  | $0   |
| **Total**     |                                                                               | $12.54  |          |



<img src="images/Screenshot 2026-10-21 135517.png" alt="price" width="480">
<img src="images/Screenshot 2026-10-21 133419.png" alt="price" width="480">

EVEYTHING TOGETHER = $72.34

## Schematics

**This project was made on EasyEDA**

<table>
<tr>
<td><img src="images/Screenshot 2026-09-26 202506.png" width="380"><br><sub></sub></td>
<td><img src="images/Screenshot 2026-09-26 202242.png" width="380"><br><sub></sub></td>
</tr>
</table>

## Repo structure

```
├── schematics/   Schematic image
├── firmware/     ATtiny1616 firmware (Arduino/megaTinyCore)
├── pcb/          PCB files
└── images/       photos and renders
```


## License

- **Firmware**: [MIT License](LICENSE-MIT) — free to use, modify, and share, just keep the copyright notice
