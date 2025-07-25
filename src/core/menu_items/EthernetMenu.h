

#ifndef __Ethernet_MENU_H__
#define __Ethernet_MENU_H__

#include <MenuItemInterface.h>
#if !defined(LITE_VERSION)
class EthernetMenu : public MenuItemInterface {
public:
    EthernetMenu() : MenuItemInterface("Ethernet") {}

    void optionsMenu(void);
    void drawIcon(float scale);
    void drawIconImg();
    bool getTheme() { return bruceConfig.theme.rfid; }
    void drawCustomTFT(float scale = 1) override {
        clearIconArea();
        static const unsigned char PROGMEM image_ButtonLeft_bits[] = {0x03,0x03,0x0f,0x0f,0x3f,0x3f,0xff,0xff,0x3f,0x3f,0x0f,0x0f,0x03,0x03};
        static const unsigned char PROGMEM image_ButtonRight_bits[] = {0xc0,0xc0,0xf0,0xf0,0xfc,0xfc,0xff,0xff,0xfc,0xfc,0xf0,0xf0,0xc0,0xc0};
        static const unsigned char PROGMEM image_Layer_6_bits[] = {0xff,0xf0,0x00,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xf0,0x00,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xf0,0x00,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x00,0xf0,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0xf0,0x00,0xf0,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0xf0,0x00,0xf0,0xf7,0xc0,0xfc,0x0f,0x37,0xbe,0x03,0xf0,0x3c,0xf0,0x01,0xf8,0xff,0xe1,0xfe,0x0f,0x77,0xff,0x07,0xf8,0x7e,0xff,0xe1,0xf8,0xff,0xf3,0xff,0x0f,0xf7,0xff,0x8f,0xfc,0x7e,0xff,0xe0,0xf0,0xf9,0xf7,0xc7,0x0f,0x87,0xcf,0x9f,0x1c,0x3c,0xff,0xe0,0xf0,0xf0,0xf7,0x83,0x8f,0x07,0x87,0x9e,0x0e,0x3c,0xf0,0x00,0xf0,0xf0,0xf7,0xff,0x8f,0x07,0x87,0x9f,0xfe,0x3c,0xf0,0x00,0xf0,0xf0,0xf7,0xff,0x8f,0x07,0x87,0x9f,0xfe,0x3c,0xf0,0x00,0xf0,0xf0,0xf7,0x80,0x0f,0x07,0x87,0x9e,0x00,0x3c,0xf0,0x00,0xf0,0xf0,0xf7,0x80,0x0f,0x07,0x87,0x9e,0x00,0x3c,0xf0,0x00,0xf0,0xf0,0xf3,0xc3,0x8f,0x07,0x87,0x8f,0x0e,0x3c,0xff,0xf8,0xf8,0xf0,0xf3,0xff,0x8f,0x07,0x87,0x8f,0xfe,0x3e,0xff,0xf8,0xf8,0xf0,0xf1,0xff,0x0f,0x07,0x87,0x87,0xfc,0x3e,0xff,0xf8,0x78,0xf0,0xf0,0x7c,0x0f,0x07,0x87,0x81,0xf0,0x1e};
        static const unsigned char PROGMEM image_monitor_bits[] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0xf8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0xf8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0xf8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0xf8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0xf8,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0x1f,0xf8,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0x1f,0xf8,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0x1f,0xf8,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0x1f,0xf8,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x1f,0xf8,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0x1f,0xf8,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0x1f,0xf8,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0x1f,0xf8,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0x1f,0xf8,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0x1f,0xf8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0xf8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0xf8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0xf8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0xf8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x03,0xff,0xff,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xff,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xff,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xff,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xff,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xff,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xff,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xff,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xff,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xff,0xc0,0x00,0x00,0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0xf0,0x00,0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0xf0,0x00,0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0xf0,0x00,0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0xf0,0x00,0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

        tft.drawRect(0, 138, 320, 2, bruceConfig.priColor);
        tft.drawBitmap(88, 147, image_ButtonLeft_bits, 8, 14, bruceConfig.priColor);
        tft.drawBitmap(224, 148, image_ButtonRight_bits, 8, 14, bruceConfig.priColor);
        tft.drawBitmap(113, 145, image_Layer_6_bits, 95, 18, bruceConfig.priColor);
        tft.drawBitmap(120, 44, image_monitor_bits, 80, 80, bruceConfig.priColor);
    }
};

#endif
#endif
