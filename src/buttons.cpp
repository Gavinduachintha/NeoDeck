#include "config.h"
#include "menu.h"
#include "wifi_scanner.h"
#include "modules.h"
#include "settings.h"
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
        case 2:
            settings();
        default:
            openModule();
            break;
    }
}

void onButtonABPressed() {
    drawMenu();
}