void label() {
  
  #ifdef danzi
    Voice.addCommand("guo", 1);
    Voice.addCommand("guo tai", 1);
    Voice.addCommand("guo tai min", 1);
    Voice.addCommand("guo tai min an", 1);
  
    Voice.addCommand("ge", 1);
    Voice.addCommand("ge tai", 1);
    Voice.addCommand("ge tai min", 1);
    Voice.addCommand("ge tai min an", 1);
  
    Voice.addCommand("qian", 1);
    Voice.addCommand("qian sheng", 1);
    Voice.addCommand("qian sheng jin", 1);
    Voice.addCommand("qian sheng jin si", 1);
    Voice.addCommand("qian sheng jin shi", 1);
  
    Voice.addCommand("qian", 1);
    Voice.addCommand("qian shen", 1);
    Voice.addCommand("qian shen jin", 1);
    Voice.addCommand("qian shen jin si", 1);
    Voice.addCommand("qian shen jin shi", 1);
  
    Voice.addCommand("wan", 1);
    Voice.addCommand("wan nian", 1);
    Voice.addCommand("wan nian wu", 1);
    Voice.addCommand("wan nian wu jiang", 1);
  
    Voice.addCommand("wang", 1);
    Voice.addCommand("wang nian", 1);
    Voice.addCommand("wang nian wu", 1);
    Voice.addCommand("wang nian wu jiang", 1);
  #endif
  
  #ifndef danzi
    Voice.addCommand("guo tai", 1);
    Voice.addCommand("guo tai min", 1);
    Voice.addCommand("guo tai min an", 1);
  
    Voice.addCommand("ge tai", 1);
    Voice.addCommand("ge tai min", 1);
    Voice.addCommand("ge tai min an", 1);
  
    Voice.addCommand("qian sheng", 1);
    Voice.addCommand("qian sheng jin", 1);
    Voice.addCommand("qian sheng jin si", 1);
    Voice.addCommand("qian sheng jin shi", 1);
  
    Voice.addCommand("qian shen", 1);
    Voice.addCommand("qian shen jin", 1);
    Voice.addCommand("qian shen jin si", 1);
    Voice.addCommand("qian shen jin shi", 1);
  
    Voice.addCommand("wan nian", 1);
    Voice.addCommand("wan nian wu", 1);
    Voice.addCommand("wan nian wu jiang", 1);
  
    Voice.addCommand("wang nian", 1);
    Voice.addCommand("wang nian wu", 1);
    Voice.addCommand("wang nian wu jiang", 1);
  #endif
}

