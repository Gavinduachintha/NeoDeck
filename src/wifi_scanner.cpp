#include "config.h"
#include "wifi_scanner.h"
#include <WiFi.h>

void wifiScanner() {
    inMenu = false;
    k10.canvas->canvasClear();
    k10.canvas->canvasText("WIFI SCANNER", 10, 10, THEME_PRIMARY, Canvas::eCNAndENFont24, 20, true);
    k10.canvas->updateCanvas();

    WiFi.mode(WIFI_STA);
    WiFi.disconnect();
    delay(100);

    int networks = WiFi.scanNetworks();
    k10.canvas->canvasClear();
    k10.canvas->canvasText("ACCESS POINTS:", 10, 10, THEME_ACCENT, Canvas::eCNAndENFont16, 20, true);

    int displayCount = min(networks, 5);
    for (int i = 0; i < displayCount; i++) {
        String result = String(i + 1) + ": " + WiFi.SSID(i);
        k10.canvas->canvasText(result, 10, 40 + (i * 30), THEME_TEXT, Canvas::eCNAndENFont16, 25, true);
    }
    k10.canvas->updateCanvas();
}