#include <16f877a.h>
#fuses HS,NOWDT
#use delay(clock=20000000)
//#use fast_io(c)
int i;
const int digit[10] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7C,0x07,0x7F,0x6F};

void main()
{
set_tris_c(0x00);
output_c(0x00);

while(1)
{
   for(i=0;i<=9;i++)
   {
      output_c(digit[i]);
      delay_ms(500);
   }
   for(i=9;i<=9;i--)
   {
      output_c(digit[i]);
      delay_ms(500);
   }
   
}
}

