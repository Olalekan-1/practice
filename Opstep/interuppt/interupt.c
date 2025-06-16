#include "interupt.h"


void main()
{
   sys();
   while(TRUE)
   {
      if(flag) run_interrupt();
      
      output_high(PIN_A0);
      delay_ms(1000);
      output_low(PIN_A0);
      delay_ms(1000);
      
   }
}

