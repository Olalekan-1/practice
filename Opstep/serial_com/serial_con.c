#include <serial_con.h>

void main()
{
   
   sys();
   setup_uart(9600);
   delay_ms(1000);
   sys();
   display();
   display_v();

   while(TRUE)
   {
      
      //TODO: User Code
   }

}
