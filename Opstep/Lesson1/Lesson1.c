#include <Lesson1.h>
#use fast_io(a)
#use fast_io(b)

void main(){
   output_a(0b000000);
   output_b(0b00000000);
   set_tris_a(0b111111);
   set_tris_b(0b00000000);
   output_a(0b000000);
   output_b(0b00000000);
   
   output_high(pin_b7);
   
   while(true){
      if(input(pin_a1)==1){
         output_high(pin_b0);
         delay_ms(3000);
         output_low(pin_b0);
      }
   }
}
