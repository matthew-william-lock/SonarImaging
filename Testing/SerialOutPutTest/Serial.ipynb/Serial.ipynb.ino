// Serial Ouput Test

void setup() {
  Serial.begin(9600);
  //analogWriteResolution(12);
  Serial.println("ready");
  
}


  
void loop(){
  

    for (int i = 0;i<100;i++ ){
    Serial.println(i);
    delay(330);
    }    
}
