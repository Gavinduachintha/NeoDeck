// menu.cpp
#include "config.h"
#include "menu.h"

const char* menuItems[] = {"AUDIO", "WIFI SCAN", "BLE SCAN", "SENSOR HUB", "SYSTEM", "ABOUT", "SD Card"};
const int menuSize = 6;
int selected = 0;
bool inMenu = true;

void drawMenu() {
    inMenu = true;
    k10.canvas->canvasClear();
    k10.canvas->canvasText("MAIN MENU", 45, 10, THEME_PRIMARY, Canvas::eCNAndENFont24, 20, true);
    k10.canvas->canvasText("----------------", 10, 40, THEME_DIM, Canvas::eCNAndENFont16, 20, true);

    for (int i = 0; i < menuSize; i++) {
        String item = (i == selected) ? "> " : "  ";
        item += menuItems[i];
        uint32_t color = (i == selected) ? THEME_ACCENT : THEME_TEXT;

        k10.canvas->canvasText(item, 25, 70 + (i * 23), color, Canvas::eCNAndENFont16, 20, true);
    }

    k10.canvas->canvasText("OPEN", 20, 220, THEME_PRIMARY, Canvas::eCNAndENFont16, 20, true);
    k10.canvas->canvasText("BACK", 150, 220, THEME_PRIMARY, Canvas::eCNAndENFont16, 20, true);
    k10.canvas->updateCanvas();
}