// NeoDeck.ino
#include "config.h"
#include "boot.h"
#include "menu.h"
#include "wifi_scanner.h"
#include "modules.h"
#include "buttons.h"
#include <WiFi.h>
#include "sdcardinit.h"
// ================= GLOBAL DEFINITIONS =================
UNIHIKER_K10 k10; // ← Actual definition
uint8_t screen_dir = 2; // ← Actual definition

void setup() {
    k10.begin();
    k10.initScreen(screen_dir);
    k10.creatCanvas();
    k10.setScreenBackground(THEME_BG);
    initSdCard();


    // Button callbacks
    k10.buttonA->setPressedCallback(onButtonAPressed);
    k10.buttonB->setPressedCallback(onButtonBPressed);
    k10.buttonAB->setPressedCallback(onButtonABPressed);

    bootScreen();
    drawMenu();
}

void loop() {
    // Add your future tasks here
}
