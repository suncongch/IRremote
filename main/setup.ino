//语音识别模块占用D2 D4 D9 D10 D11 D12 D13
void sys_init() {
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  Voice.init();//初始化语音模块
  label();
  Voice.start();//开始识别
}

