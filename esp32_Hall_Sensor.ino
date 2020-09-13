//Simple sketch to access the internal hall effect detector on the esp32.


int val = 0;
void setup() {
    Serial.begin(9600);
}

void loop() {
    
    val = hallRead();
   
    Serial.print("sensor = ");
    Serial.println(val);
}
