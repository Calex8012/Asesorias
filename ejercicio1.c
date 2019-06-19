#include <18F4620.h>
#fuses HS, NOFCMEN, NOIESO, PUT, NOBROWNOUT, NOWDT
#fuses NOPBADEN, NOMCLR, STVREN, NOLVP, NODEBUG
#use delay(clock=16000000)

void main (void){
   //set_tris_b(0x00);
   set_tris_c(0x00);
   //set_tris_b(0x20);
   //set_tris_d(0x00);
   int16 contador_anillo =0x80;
   int16 conteo;
   while(1){
     /* contador_anillo = contador_anillo>>1;
      if(contador_anillo==0x00){
      contador_anillo=0x80;
      }
      output_c(contador_anillo);
      delay_ms(100);
      if((contador_anillo&0x20)==0x20){
         output_b(contador_anillo);
      }
      if((contador_anillo&0x20)==0x20){
         output_b(0x00);
      }*/
      /*for(conteo=128;conteo>=1;conteo/=2){
      output_c(conteo);
      delay_ms(400);
      }*/
      output_c(0xF0);
      delay_ms(200);
      output_c(0x0F);
      delay_ms(200);
      /*for(conteo<=256;conteo=3;conteo*=4){
         output_c(conteo);
         delay_ms(200);*/
   }
   
}
