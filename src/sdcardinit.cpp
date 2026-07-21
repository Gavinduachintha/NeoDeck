#include "wifi_scanner.h"
#include <SD.h>
void initSdCard() {
    if (!SD.begin()) {
        Serial.println("SD CARD FAILED");
    } else {
        Serial.println("SD CARD READY");
    }
}
