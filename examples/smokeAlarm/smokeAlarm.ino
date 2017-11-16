/*
 ************************************************************************
 * 作者:  IntoRobot Team
 * 版本:  V1.0.0
 * 日期:  03-30-15
 ************************************************************************
 功能描述：
 烟雾报警器：检测是否有烟雾;如有,发出报警声音

 所需器件:
 1.MQ2 烟雾传感器模块

 接线说明：
 MQ2                         核心板
 1.VCC                       +5V
 2.GND                       GND
 3.DO                        悬空
 4.AO                        A0

 */

#include <mq2.h>
#include <WidgetSmokedetector.h>

//设定烟雾浓度报警值 范围是0-4095
#define SMOKE_ALARM_CONCENTRATION    2000
#define MQ2_PIN    A0

MQ2 mq2 = MQ2(MQ2_PIN);
WidgetSmokedetector smoke = WidgetSmokedetector();

void setup()
{
    //初始化
    mq2.begin();
}

void loop()
{
    if(mq2.Read() >= SMOKE_ALARM_CONCENTRATION) //烟雾浓度达到报警值
    {
        smoke.displaySmokeStatus(1);
    }
    else
    {
        smoke.displaySmokeStatus(0);
    }
    delay(3000);
}
