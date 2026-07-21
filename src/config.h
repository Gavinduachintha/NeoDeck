// config.h
#pragma once

#include "unihiker_k10.h"

extern UNIHIKER_K10 k10;
extern uint8_t screen_dir;

// ================= THEME =================
#define THEME_BG        0x080B12
#define THEME_PRIMARY   0x00E5FF
#define THEME_ACCENT    0x39FF14
#define THEME_TEXT      0xD8E4E8
#define THEME_DIM       0x3A4A55
#define THEME_WARN      0xFFB000
#define THEME_MAGENTA   0xFF2079

// ================= MENU =================
extern const char* menuItems[];
extern const int menuSize;
extern int selected;
extern bool inMenu;