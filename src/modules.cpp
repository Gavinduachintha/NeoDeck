#include "config.h"
#include "modules.h"

void openModule() {
    inMenu = false;
    k10.canvas->canvasClear();
    k10.canvas->canvasText("ACCESS MODULE", 10, 20, THEME_PRIMARY, Canvas::eCNAndENFont24, 20, true);
    k10.canvas->canvasText("----------------", 10, 55, THEME_DIM, Canvas::eCNAndENFont16, 20, true);
    k10.canvas->canvasText(menuItems[selected], 10, 90, THEME_ACCENT, Canvas::eCNAndENFont24, 20, true);
    k10.canvas->canvasText("STATUS: ONLINE", 10, 140, THEME_ACCENT, Canvas::eCNAndENFont16, 20, true);
    k10.canvas->canvasText("root@neodeck:$ _", 10, 190, THEME_TEXT, Canvas::eCNAndENFont16, 20, true);
    k10.canvas->updateCanvas();
}