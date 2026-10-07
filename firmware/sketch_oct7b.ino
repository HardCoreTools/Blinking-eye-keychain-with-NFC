#include <U8g2lib.h>
#include <Wire.h>

U8G2_SSD1306_128X64_NONAME_1_HW_I2C u8g2(U8G2_R0, U8X8_PIN_NONE);

const int EYE_W   = 34;
const int EYE_H   = 40;
const int EYE_GAP = 24;
const int CX_L    = 64 - EYE_GAP / 2 - EYE_W / 2;
const int CX_R    = 64 + EYE_GAP / 2 + EYE_W / 2;
const int CY      = 32;

int lookX = 0, lookY = 0;
int tgtX  = 0, tgtY  = 0;
int blinkH = EYE_H;
bool blinking = false;
bool opening  = false;

unsigned long nextBlink = 2000;
unsigned long nextLook  = 1000;
unsigned long lastFrame = 0;

void drawEye(int cx, int cy, int w, int h) {
  if (h < 4) h = 4;
  int x = cx - w / 2;
  int y = cy - h / 2;

  u8g2.setDrawColor(1);
  u8g2.drawRBox(x, y, w, h, 8);

  if (h > 20) {
    int nh = h / 2;
    int px = (lookX * 4) / 5;
    int py = constrain(lookY / 2, -3, 3);
    u8g2.setDrawColor(0);
    u8g2.drawRBox(cx - 5 + px, cy - nh / 2 + py, 10, nh, 3);
  }

  u8g2.setDrawColor(1);
}

void updateAnimation() {
  unsigned long now = millis();

  if (now >= nextLook) {
    tgtX = random(-10, 11);
    tgtY = random(-6, 7);
    nextLook = now + random(800, 3000);
  }

  lookX += (tgtX - lookX + (tgtX > lookX ? 1 : 0)) / 3;
  lookY += (tgtY - lookY + (tgtY > lookY ? 1 : 0)) / 3;

  if (!blinking && !opening && now >= nextBlink) blinking = true;

  if (blinking) {
    blinkH -= 10;
    if (blinkH <= 4) {
      blinkH = 4;
      blinking = false;
      opening = true;
    }
  } else if (opening) {
    blinkH += 8;
    if (blinkH >= EYE_H) {
      blinkH = EYE_H;
      opening = false;
      nextBlink = now + random(2000, 6000);
    }
  }
}

void setup() {
  u8g2.begin();
  u8g2.setBusClock(400000);
  randomSeed(analogRead(PIN_PA4));
}

void loop() {
  if (millis() - lastFrame < 33) return;
  lastFrame = millis();

  updateAnimation();

  u8g2.firstPage();
  do {
    drawEye(CX_L + lookX, CY + lookY, EYE_W, blinkH);
    drawEye(CX_R + lookX, CY + lookY, EYE_W, blinkH);
  } while (u8g2.nextPage());
}