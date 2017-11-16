#include "WidgetSmokedetector.h"

WidgetSmokedetector::WidgetSmokedetector(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataStatusTopic,0,sizeof(pDataStatusTopic));
    sprintf(pDataStatusTopic,"channel/smokedetector_%d/data/status",_Item);
}

WidgetSmokedetector::~WidgetSmokedetector()
{

}

void WidgetSmokedetector::begin(void (*UserCallBack)(void))
{

}

void WidgetSmokedetector::displaySmokeStatus(uint8_t ucVal)
{
    IntoRobot.publish(pDataStatusTopic,ucVal);
}



