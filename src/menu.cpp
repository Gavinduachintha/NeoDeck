// menu.cpp
#include "config.h"
#include "menu.h"

const char* menuItems[] = {"AUDIO", "WIFI SCAN", "BLE SCAN", "SENSOR HUB", "SYSTEM", "ABOUT", "SD CARD", "Settings"};
const int menuSize = 8;   // was 6 — "SD Card" was being silently dropped
int selected = 0;
bool inMenu = true;

void drawMenu() {
    inMenu = true;
    k10.canvas->canvasClear();

    // ---- Header ----
    k10.canvas->canvasText("MAIN MENU", 45, 10, THEME_PRIMARY, Canvas::eCNAndENFont24, 20, true);
    k10.canvas->canvasLine(10, 38, 230, 38, THEME_DIM);   // real rule instead of "----" text

    // ---- Menu list ----
    for (int i = 0; i < menuSize; i++) {
        int y = 55 + (i * 23);
        bool isSelected = (i == selected);

        if (isSelected) {
            // filled bar behind the active row — needs THEME_BG (see note below)
            k10.canvas->canvasRectangle(10, y - 4, 220, 20, THEME_ACCENT, THEME_BG, true);
        }

        String item = isSelected ? "> " : "  ";
        item += menuItems[i];
        uint32_t color = isSelected ? THEME_ACCENT : THEME_TEXT;

        k10.canvas->canvasText(item, 20, y, color, Canvas::eCNAndENFont16, 20, true);
    }

    // ---- Footer ----
    k10.canvas->canvasLine(10, 205, 230, 205, THEME_DIM);
    k10.canvas->canvasText("OPEN", 20, 215, THEME_PRIMARY, Canvas::eCNAndENFont16, 20, true);
    k10.canvas->canvasText("BACK", 150, 215, THEME_PRIMARY, Canvas::eCNAndENFont16, 20, true);

    k10.canvas->updateCanvas();
}