#ifndef __CONNECT_MENU_H__
#define __CONNECT_MENU_H__

#include <MenuItemInterface.h>

class ConnectMenu : public MenuItemInterface {
public:
    ConnectMenu() : MenuItemInterface("Connect") {}

    void optionsMenu(void);
    void drawIcon(float scale);
    void drawIconImg();
    bool getTheme() { return bruceConfig.theme.connect; }
    void drawCustomTFT(float scale = 1) override {
        clearIconArea();
        static const unsigned char PROGMEM image_ButtonLeft_bits[] = {0x03,0x03,0x0f,0x0f,0x3f,0x3f,0xff,0xff,0x3f,0x3f,0x0f,0x0f,0x03,0x03};

        static const unsigned char PROGMEM image_ButtonRight_bits[] = {0xc0,0xc0,0xf0,0xf0,0xfc,0xfc,0xff,0xff,0xfc,0xfc,0xf0,0xf0,0xc0,0xc0};

        static const unsigned char PROGMEM image_file_share_bits[] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xff,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xff,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xff,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xff,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xff,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0xff,0xc1,0xff,0x80,0x00,0x00,0x00,0x00,0x00,0xff,0xc1,0xff,0x80,0x00,0x00,0x00,0x00,0x00,0xff,0xc1,0xff,0x80,0x00,0x00,0x00,0x00,0x00,0xff,0xc1,0xff,0x80,0x00,0x00,0x00,0x00,0x00,0xff,0xc1,0xff,0x80,0x00,0x00,0x00,0x03,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0x00,0x00,0x00,0x00,0x07,0xfe,0x0f,0xfc,0x00,0x00,0x00,0x00,0x00,0x07,0xfe,0x0f,0xfc,0x00,0x00,0x00,0x00,0x00,0x07,0xfe,0x0f,0xfc,0x00,0x00,0x00,0x00,0x00,0x07,0xfe,0x0f,0xfc,0x00,0x00,0x00,0x00,0x00,0x07,0xfe,0x0f,0xfc,0x00,0x00,0x00,0x00,0x00,0xf8,0x01,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0x01,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0x01,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0x01,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0x01,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0x01,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0x01,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0x01,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0x01,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0x01,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xfe,0x0f,0xfc,0x00,0x00,0x00,0x00,0x00,0x07,0xfe,0x0f,0xfc,0x00,0x00,0x00,0x00,0x00,0x07,0xfe,0x0f,0xfc,0x00,0x00,0x00,0x00,0x00,0x07,0xfe,0x0f,0xfc,0x00,0x00,0x00,0x00,0x00,0x07,0xfe,0x0f,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xc1,0xff,0x80,0x00,0x00,0x00,0x00,0x00,0xff,0xc1,0xff,0x80,0x00,0x00,0x00,0x00,0x00,0xff,0xc1,0xff,0x80,0x00,0x00,0x00,0x00,0x00,0xff,0xc1,0xff,0x80,0x00,0x00,0x00,0x00,0x00,0xff,0xc1,0xff,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xff,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xff,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xff,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xff,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xff,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

        static const unsigned char PROGMEM image_Layer_6_bits[] = {0x07,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0xf8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x78,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0xf8,0x0f,0x07,0xc0,0x7b,0xe0,0xf7,0xc0,0x7e,0x00,0xf8,0x3c,0xf0,0x00,0x1f,0xf0,0x7f,0xf0,0xff,0xe0,0xff,0x03,0xfe,0x7e,0xf0,0x00,0x3f,0xf8,0x7f,0xf8,0xff,0xf1,0xff,0x87,0xff,0x7e,0xf0,0x00,0x3c,0x78,0x7c,0xf8,0xf9,0xf3,0xe3,0x87,0x8f,0x3c,0xf0,0x00,0x78,0x3c,0x78,0x78,0xf0,0xf3,0xc1,0xcf,0x07,0x3c,0xf0,0x00,0x78,0x3c,0x78,0x78,0xf0,0xf3,0xff,0xcf,0x00,0x3c,0xf0,0x00,0x78,0x3c,0x78,0x78,0xf0,0xf3,0xff,0xcf,0x00,0x3c,0xf8,0x0f,0x78,0x3c,0x78,0x78,0xf0,0xf3,0xc0,0x0f,0x00,0x3c,0x78,0x1f,0x78,0x3c,0x78,0x78,0xf0,0xf3,0xc0,0x0f,0x07,0x3c,0x7c,0x3e,0x3c,0x78,0x78,0x78,0xf0,0xf1,0xe1,0xc7,0x8f,0x3c,0x3f,0xfe,0x3f,0xf8,0x78,0x78,0xf0,0xf1,0xff,0xc7,0xff,0x3e,0x1f,0xfc,0x1f,0xf0,0x78,0x78,0xf0,0xf0,0xff,0x83,0xfe,0x3e,0x07,0xf0,0x07,0xc0,0x78,0x78,0xf0,0xf0,0x3e,0x00,0xf8,0x1e};

        tft.drawRect(0, 138, 320, 2, bruceConfig.priColor);
        tft.drawBitmap(88, 147, image_ButtonLeft_bits, 8, 14, bruceConfig.priColor);
        tft.drawBitmap(224, 148, image_ButtonRight_bits, 8, 14, bruceConfig.priColor);
        tft.drawBitmap(113, 145, image_Layer_6_bits, 95, 18, bruceConfig.priColor);
        tft.drawBitmap(125, 44, image_file_share_bits, 70, 80, bruceConfig.priColor);
    }
};

#endif
