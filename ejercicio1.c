#include <18F4620.h>
#fuses HS, NOFCMEN, NOIESO, PUT, NOBROWNOUT, NOWDT
#fuses NOPBADEN, NOMCLR, STVREN, NOLVP, NODEBUG
#use delay(clock=16000000)

void main (void){
   //set_tris_b(0x00);
   set_tris_c(0x00);
   //set_tris_d(0x00);
   int16 contador_anillo =0x80;
   while(1){
      contador_anillo = contador_anillo>>1;
      if(contador_anillo==0x00){
      contador_anillo=0x80;
      }
      output_c(contador_anillo);
      delay_ms(100);
  
      /*output_c(0xFF);
      delay_ms(400);
      output_c(0x00);
      delay_ms(400);
      output_c(0xFF);
      delay_ms(400);
      output_c(0x00);
      delay_ms(400);*/
   }
}
