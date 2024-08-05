void setup(){
    pinMode(LED_BUILTIN, OUTPUT);

}

void loop(){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(200);// Here 200 is in Milliseconds, 1000ms = 1 second
    digitalWrite(LED_BUILTIN, LOW);
    delay(200);
} 