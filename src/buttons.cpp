#include "config.h"
#include "menu.h"
#include "wifi_scanner.h"
#include "modules.h"

void onButtonAPressed() {
    if (!inMenu) return;
    selected = (selected + 1) % menuSize;
    drawMenu();
}

void onButtonBPressed() {
    if (!inMenu) return;

    switch (selected) {
        case 1:  // WIFI SCAN
            wifiScanner();
            break;
        default:
            openModule();
            break;
    }
}

void onButtonABPressed() {
    drawMenu();
}