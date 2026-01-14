ISR (PCINT0_vect){
  
  PORTD ^= 0b00110000; // toggle pins 4 and 5
}
ISR(PCINT2_vect){
  PORTD ^= 0b00001100; // togglr pins 2 and 3
}

int main(void){
  DDRD = 0b00111100;	// pins 6-7 as inputs and pin 2-3 as outputs
  PORTD = 0b00011000;
  PCICR = 0b00000101;	// enable pin change interrupts 2 and 0
  PCMSK2 = 0b10000000;	// enable pin change interrupts 0
  PCMSK0 = 0b00000001;
  sei();	// enable interrupts globally
  
  while(1){
    
  }
}
