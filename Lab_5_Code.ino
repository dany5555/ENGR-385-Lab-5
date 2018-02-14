void setup() {
  // put your setup code here, to run once:


asm(
  "sbi %0, %1 \n"
  : : "I" ( _SFR_IO_ADDR(DDRB)), "I" (DDB4)
  );
}

void loop() {
  // put your main code here, to run repeatedly:


  //this is a pin set high for pin 13 
  asm (
    "sbi %0, %1 \n" : : "I" (_SFR_IO_ADDR(PORTB)), "I" (PORTB4)
  );
  delay(100);

  //this is a pin set low for pin 13
  asm (
    "cbi %0, %1 \n" : : "I" (_SFR_IO_ADDR(PORTB)), "I" (PORTB4)
  );
  delay(10);
}
