#include <Arduino.h>

#include <usbd_def.h>
#include <usbd_core.h>

#define DEVICE_FS 		0
USBD_HandleTypeDef hUsbDeviceFS;
USBD_DescriptorsTypeDef FS_Desc;

void setup()
{
  pinMode(PC13, OUTPUT);

  SerialUSB.begin();

  //USBD_Init(&hUsbDeviceFS, &FS_Desc, DEVICE_FS);

}

void loop()
{
  SerialUSB.println("Hello USB world");
  digitalWrite(PC13, HIGH);
  delay(990);
  digitalWrite(PC13, LOW);
  delay(10);
}
