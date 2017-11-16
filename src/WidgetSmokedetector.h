#ifndef WIDGET_SMOKEDETECTOR_H_
#define WIDGET_SMOKEDETECTOR_H_

#include "application.h"

class WidgetSmokedetector
{
    public:
        WidgetSmokedetector(uint8_t ucItem = 0);
        ~WidgetSmokedetector();
        void begin(void (*UserCallBack)(void) = NULL);
        void displaySmokeStatus(uint8_t ucVal);

    private:
        char pDataStatusTopic[64];
        uint8_t _Item=0;
};

#endif
