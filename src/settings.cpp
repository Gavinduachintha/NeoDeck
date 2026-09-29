#include "config.h"


void settings() {
    String settings[] = {"wallpaper"};
    k10.canvas->canvasClear();
    for (int i = 0; i < sizeof(settings)/sizeof(char*); i++) {
     k10.canvas->canvasText("Settings", 45, 10, THEME_PRIMARY, Canvas::eCNAndENFont24, 20, true);
    }
    k10.canvas->updateCanvas();

}
