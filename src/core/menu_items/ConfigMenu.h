#ifndef __CONFIG_MENU_H__
#define __CONFIG_MENU_H__

#include <MenuItemInterface.h>

class ConfigMenu : public MenuItemInterface {
public:
    ConfigMenu() : MenuItemInterface("Settings") {}

    void optionsMenu(void);
    void drawIcon(float scale);
    void drawIconImg();
    bool getTheme() { return bruceConfig.theme.config; }
    void drawCustomTFT(float scale = 1) override {
        clearIconArea();
        static const unsigned char PROGMEM image_ButtonLeft_bits[] = {0x03,0x03,0x0f,0x0f,0x3f,0x3f,0xff,0xff,0x3f,0x3f,0x0f,0x0f,0x03,0x03};

        static const unsigned char PROGMEM image_ButtonRight_bits[] = {0xc0,0xc0,0xf0,0xf0,0xfc,0xfc,0xff,0xff,0xfc,0xfc,0xf0,0xf0,0xc0,0xc0};

        static const unsigned char PROGMEM image_Layer_6_bits[] = {0x0f,0xc0,0x00,0x00,0x00,0x01,0xe0,0x00,0x00,0x00,0x00,0x00,0x3f,0xf0,0x00,0x00,0x00,0x01,0xe0,0x00,0x00,0x00,0x00,0x00,0x7f,0xf8,0x00,0x00,0x00,0x01,0xe0,0x00,0x00,0x00,0x00,0x00,0xf8,0x7c,0x00,0x01,0xe1,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x3c,0x00,0x01,0xe1,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x00,0x1f,0x81,0xe1,0xe1,0xe3,0xdf,0x01,0xe7,0x83,0xf0,0xf0,0x00,0x3f,0xc3,0xf3,0xf1,0xe3,0xff,0x83,0xf7,0x8f,0xf8,0xfe,0x00,0x7f,0xe3,0xf3,0xf1,0xe3,0xff,0xc7,0xff,0x9f,0xfc,0x7f,0xf0,0xf8,0xe1,0xe1,0xe1,0xe3,0xe7,0xc7,0x8f,0x9e,0x1e,0x1f,0xfc,0xf0,0x71,0xe1,0xe1,0xe3,0xc3,0xcf,0x07,0x9f,0x00,0x03,0xfe,0xff,0xf1,0xe1,0xe1,0xe3,0xc3,0xcf,0x07,0x9f,0xe0,0x00,0x3e,0xff,0xf1,0xe1,0xe1,0xe3,0xc3,0xcf,0x07,0x8f,0xfc,0x00,0x1e,0xf0,0x01,0xe1,0xe1,0xe3,0xc3,0xcf,0x07,0x81,0xfe,0xf0,0x1e,0xf0,0x01,0xe1,0xe1,0xe3,0xc3,0xcf,0x07,0x80,0x3e,0x78,0x3e,0x78,0x71,0xe1,0xe1,0xe3,0xc3,0xcf,0x8f,0x9e,0x1e,0x7f,0xfc,0x7f,0xf1,0xf1,0xf1,0xe3,0xc3,0xc7,0xff,0x9f,0xfc,0x3f,0xf8,0x3f,0xe1,0xf1,0xf1,0xe3,0xc3,0xc3,0xff,0x8f,0xfc,0x0f,0xe0,0x0f,0x80,0xf0,0xf1,0xe3,0xc3,0xc1,0xf7,0x83,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0x8f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xfc,0x00,0x00};

        static const unsigned char PROGMEM image_menu_settings_gear_bits[] = {0x00,0x00,0x00,0x03,0xff,0xff,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xff,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xff,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xff,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xff,0xc0,0x00,0x00,0x00,0x00,0x01,0xf0,0x03,0xe0,0x07,0xc0,0x0f,0x80,0x00,0x00,0x01,0xf0,0x03,0xe0,0x07,0xc0,0x0f,0x80,0x00,0x00,0x01,0xf0,0x03,0xe0,0x07,0xc0,0x0f,0x80,0x00,0x00,0x01,0xf0,0x03,0xe0,0x07,0xc0,0x0f,0x80,0x00,0x00,0x01,0xf0,0x03,0xe0,0x07,0xc0,0x0f,0x80,0x00,0x00,0x3e,0x0f,0xfc,0x00,0x00,0x3f,0xf0,0x7c,0x00,0x00,0x3e,0x0f,0xfc,0x00,0x00,0x3f,0xf0,0x7c,0x00,0x00,0x3e,0x0f,0xfc,0x00,0x00,0x3f,0xf0,0x7c,0x00,0x00,0x3e,0x0f,0xfc,0x00,0x00,0x3f,0xf0,0x7c,0x00,0x00,0x3e,0x0f,0xfc,0x00,0x00,0x3f,0xf0,0x7c,0x00,0x07,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xe0,0x07,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xe0,0x07,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xe0,0x07,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xe0,0x07,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xe0,0x00,0x3e,0x00,0x03,0xff,0xff,0xc0,0x00,0x7c,0x00,0x00,0x3e,0x00,0x03,0xff,0xff,0xc0,0x00,0x7c,0x00,0x00,0x3e,0x00,0x03,0xff,0xff,0xc0,0x00,0x7c,0x00,0x00,0x3e,0x00,0x03,0xff,0xff,0xc0,0x00,0x7c,0x00,0x00,0x3e,0x00,0x03,0xff,0xff,0xc0,0x00,0x7c,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x3e,0x00,0x7c,0x00,0xff,0xc0,0x0f,0x80,0x00,0x00,0x01,0xf0,0x03,0xff,0xff,0xc0,0x0f,0x80,0x00,0x00,0x01,0xf0,0x03,0xff,0xff,0xc0,0x0f,0x80,0x00,0x00,0x01,0xf0,0x03,0xff,0xff,0xc0,0x0f,0x80,0x00,0x00,0x01,0xf0,0x03,0xff,0xff,0xc0,0x0f,0x80,0x00,0x00,0x01,0xf0,0x03,0xff,0xf8,0x00,0x0f,0x80,0x00,0x00,0x01,0xf0,0x00,0x1f,0xf8,0x00,0x0f,0x80,0x00,0x00,0x01,0xf0,0x00,0x1f,0xf8,0x00,0x0f,0x80,0x00,0x00,0x01,0xf0,0x00,0x1f,0xf8,0x00,0x0f,0x80,0x00,0x00,0x01,0xf0,0x00,0x1f,0xf8,0x00,0x0f,0x80,0x00,0x00,0x01,0xf0,0x00,0x1f,0xf8,0x00,0x0f,0x80,0x00,0x00,0x01,0xf0,0x00,0x1f,0xf8,0x00,0x0f,0x80,0x00,0x00,0x01,0xf0,0x00,0x1f,0xf8,0x00,0x0f,0x80,0x00,0x00,0x01,0xf0,0x00,0x1f,0xf8,0x00,0x0f,0x80,0x00,0x00,0x01,0xf0,0x00,0x1f,0xf8,0x00,0x0f,0x80,0x00,0x00,0x01,0xf0,0x00,0x1f,0xff,0xc0,0x0f,0x80,0x00,0x00,0x01,0xf0,0x03,0xff,0xff,0xc0,0x0f,0x80,0x00,0x00,0x01,0xf0,0x03,0xff,0xff,0xc0,0x0f,0x80,0x00,0x00,0x01,0xf0,0x03,0xff,0xff,0xc0,0x0f,0x80,0x00,0x00,0x01,0xf0,0x03,0xff,0xff,0xc0,0x0f,0x80,0x00,0x00,0x01,0xf0,0x03,0xff,0x00,0x3e,0x00,0x7c,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x3e,0x00,0x03,0xff,0xff,0xc0,0x00,0x7c,0x00,0x00,0x3e,0x00,0x03,0xff,0xff,0xc0,0x00,0x7c,0x00,0x00,0x3e,0x00,0x03,0xff,0xff,0xc0,0x00,0x7c,0x00,0x00,0x3e,0x00,0x03,0xff,0xff,0xc0,0x00,0x7c,0x00,0x00,0x3e,0x00,0x03,0xff,0xff,0xc0,0x00,0x7c,0x00,0x07,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xe0,0x07,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xe0,0x07,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xe0,0x07,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xe0,0x07,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xe0,0x00,0x3e,0x0f,0xfc,0x00,0x00,0x3f,0xf0,0x7c,0x00,0x00,0x3e,0x0f,0xfc,0x00,0x00,0x3f,0xf0,0x7c,0x00,0x00,0x3e,0x0f,0xfc,0x00,0x00,0x3f,0xf0,0x7c,0x00,0x00,0x3e,0x0f,0xfc,0x00,0x00,0x3f,0xf0,0x7c,0x00,0x00,0x3e,0x0f,0xfc,0x00,0x00,0x3f,0xf0,0x7c,0x00,0x00,0x01,0xf0,0x03,0xe0,0x07,0xc0,0x0f,0x80,0x00,0x00,0x01,0xf0,0x03,0xe0,0x07,0xc0,0x0f,0x80,0x00,0x00,0x01,0xf0,0x03,0xe0,0x07,0xc0,0x0f,0x80,0x00,0x00,0x01,0xf0,0x03,0xe0,0x07,0xc0,0x0f,0x80,0x00,0x00,0x01,0xf0,0x03,0xe0,0x07,0xc0,0x0f,0x80,0x00,0x00,0x00,0x00,0x03,0xff,0xff,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xff,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xff,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xff,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xff,0xc0,0x00,0x00,0x00};


        tft.drawRect(0, 138, 320, 2, bruceConfig.priColor);
        tft.drawBitmap(88, 147, image_ButtonLeft_bits, 8, 14, bruceConfig.priColor);
        tft.drawBitmap(224, 148, image_ButtonRight_bits, 8, 14, bruceConfig.priColor);
        tft.drawBitmap(120, 44, image_menu_settings_gear_bits, 80, 80, bruceConfig.priColor);
        tft.drawBitmap(113, 145, image_Layer_6_bits, 95, 23, bruceConfig.priColor);
    }

private:
    void devMenu(void);
};

#endif
