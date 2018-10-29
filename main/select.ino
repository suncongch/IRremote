void select() {
  #ifdef hongwai
    if (irrecv.decode(&results)) {
      Serial.println(1);
      irrecv.resume();
      delay(100);
    }
    else if (Voice.read()==1) {
      Serial.println(1);
    }
  #endif
  
  #ifndef hongwai
    if (Voice.read()==1) {
      Serial.println(1);
    }
  #endif
}

