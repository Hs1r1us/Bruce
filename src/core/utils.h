#ifndef __UTILS_H__
#define __UTILS_H__

#include <functional>

void backToMenu();
void addOptionToMainMenu();
void updateClockTimezone();
void updateTimeStr(struct tm timeInfo);
void showDeviceInfo();

void touchHeatMap(struct TouchPoint t);

void keyPressHandler(volatile bool &btn, const std::function<void()> &shortPressFunc, const std::function<void()> &longPressFunc);

#endif