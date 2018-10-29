#include <IRremote.h>
#include <VoiceRecognition.h>

#define danzi 1//注释掉此行代码语音识别没有单字
#define hongwai 1//注释掉此行代码没有红外控制

IRrecv irrecv(8);//（红外接收器数据引脚）
VoiceRecognition Voice;
decode_results results;

void setup() {
  sys_init();    
}

void loop() {
  select();
}
