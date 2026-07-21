#include "config.h"
#include "boot.h"

void bootScreen() {
    k10.canvas->canvasClear();
    k10.canvas->canvasText("NEO DECK", 20, 20, THEME_PRIMARY, Canvas::eCNAndENFont24, 20, true);
    k10.canvas->canvasText("CYBER TERMINAL", 20, 55, THEME_ACCENT, Canvas::eCNAndENFont16, 20, true);
    k10.canvas->canvasText("----------------", 20, 80, THEME_DIM, Canvas::eCNAndENFont16, 20, true);
    k10.canvas->canvasText("INITIALIZING...", 20, 110, THEME_ACCENT, Canvas::eCNAndENFont16, 20, true);
    k10.canvas->updateCanvas();
    delay(1500);

    k10.canvas->canvasClear();
    k10.canvas->canvasText("SYSTEM ONLINE", 20, 80, THEME_ACCENT, Canvas::eCNAndENFont24, 20, true);
    k10.canvas->updateCanvas();
    delay(1000);
}