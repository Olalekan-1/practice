#include <16F84A.h>

#FUSES XT,NOWDT,PUT,PROTECT
#use delay(crystal=4000000)

unsigned int1 flag = FALSE;

void run_interrupt(void);

#int_ext
void isrext() {
   disable_interrupts(int_ext);
   flag = TRUE;
   // clear_interrupt(int_ext);
}

void run_interrupt(void){

   flag = FALSE;
   unsigned int8 y = 0;
   for(y = 0; y < 7; y++){
      output_high(pin_b7);
      delay_ms(500);
      output_low(pin_b7);
      delay_ms(500);
      flag = TRUE;
      clear_interrupt(int_ext);
      enable_interrupts(int_ext);
   }
}

void sys(){

   output_a(0);
   output_b(0);
   set_tris_a(0b00000);
   set_tris_b(0b00000011);
   output_a(0);
   output_b(0);
   clear_interrupt(int_ext);
   ext_int_edge(h_to_l);
   enable_interrupts(int_ext);
   enable_interrupts(global);
}

