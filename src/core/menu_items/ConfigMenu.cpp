#include "ConfigMenu.h"
#include "core/display.h"
#include "core/i2c_finder.h"
#include "core/main_menu.h"
#include "core/settings.h"
#include "core/utils.h"
#include "core/wifi/wifi_common.h"
#ifdef HAS_RGB_LED
#include "core/led_control.h"
#endif

void ConfigMenu::optionsMenu() {
    options = {
        {"Brightness", setBrightnessMenu},
        {"Dim Time", setDimmerTimeMenu},
        {"Orientation", lambdaHelper(gsetRotation, true)},
        {"UI Color", setUIColor},
        {"UI Theme", setTheme},
        {String("InstaBoot: " + String(bruceConfig.instantBoot ? "ON" : "OFF")),
         [=]() {
             bruceConfig.instantBoot = !bruceConfig.instantBoot;
             bruceConfig.saveFile();
         }},
#ifdef HAS_RGB_LED
        {"LED Color",
         [=]() {
             beginLed();
             setLedColorConfig();
         }},
        {"LED Effect",
         [=]() {
             beginLed();
             setLedEffectConfig();
         }},
        {"LED Brightness",
         [=]() {
             beginLed();
             setLedBrightnessConfig();
         }},
        {"Led Blink On/Off", setLedBlinkConfig},
#endif
        {"Sound On/Off", setSoundConfig},
#if defined(HAS_NS4168_SPKR)
        {"Sound Volume", setSoundVolume},
#endif
        {"Startup WiFi", setWifiStartupConfig},
        {"Startup App", setStartupApp},
        {"Hide/Show Apps", []() { mainMenu.hideAppsMenu(); }},
        {"Network Creds", setNetworkCredsMenu},
        {"Clock", setClock},
        {"Sleep", setSleepMode},
        {"Factory Reset", [=]() { bruceConfig.factoryReset(); }},
        {"Restart", [=]() { ESP.restart(); }},
    };

    options.push_back({"Turn-off", powerOff});
    options.push_back({"Deep Sleep", goToDeepSleep});

    if (bruceConfig.devMode) options.push_back({"Dev Mode", [=]() { devMenu(); }});

    options.push_back({"About", showDeviceInfo});
    addOptionToMainMenu();

    loopOptions(options, MENU_TYPE_SUBMENU, "Config");
}

void ConfigMenu::devMenu() {
    options = {
        {"I2C Finder",  find_i2c_addresses                                   },
        {"CC1101 Pins", [=]() { setSPIPinsMenu(bruceConfigPins.CC1101_bus); }},
        {"NRF24  Pins", [=]() { setSPIPinsMenu(bruceConfigPins.NRF24_bus); } },
        {"SDCard Pins", [=]() { setSPIPinsMenu(bruceConfigPins.SDCARD_bus); }},
        {"Back",        [=]() { optionsMenu(); }                             },
    };

    loopOptions(options, MENU_TYPE_SUBMENU, "Dev Mode");
}
void ConfigMenu::drawIconImg() {
    drawImg(
        *bruceConfig.themeFS(),
        bruceConfig.getThemeItemImg(bruceConfig.theme.paths.config),
        0,
        imgCenterY,
        true
    );
}
void ConfigMenu::drawIcon(float scale) {
    clearIconArea();
    int radius = scale * 9;

    int i = 0;
    for (i = 0; i < 6; i++) {
        tft.drawArc(
            iconCenterX,
            iconCenterY,
            3.5 * radius,
            2 * radius,
            15 + 60 * i,
            45 + 60 * i,
            bruceConfig.priColor,
            bruceConfig.bgColor,
            true
        );
    }

    tft.drawArc(
        iconCenterX,
        iconCenterY,
        2.5 * radius,
        radius,
        0,
        360,
        bruceConfig.priColor,
        bruceConfig.bgColor,
        false
    );
}
