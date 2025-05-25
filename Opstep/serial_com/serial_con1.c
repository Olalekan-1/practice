#include <serial_con1.h>

void main()
{
   sys();
   while(TRUE)
   {
      j = getc();
      putc(j);
   }

}
