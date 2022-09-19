#include <stdio.h>
#include "pico/stdlib.h"
    
        

int main() {

    gpio_init_mask(0x3FF);
    gpio_set_dir_out_masked(0x7F);
    gpio_set_dir_in_masked(0x380);

    char cero = 0x3f;
    char uno = 0x06;
    char dos = 0x5B;
    char tres = 0x4f;
    char cuatro = 0x66;
    char cinco = 0x6d;
    char seis = 0x7d;
    char siete = 0x07;
    char ocho = 0x7f;
    char nueve = 0x67;

    char contador = 0;

    while (1) {

        char pin7 = gpio_get(7);
        char pin8 = gpio_get(8);
        char pin9 = gpio_get(9);

        if (pin7==true){
            contador = 0;
        }
        if (pin8==true){
            contador++;
        }
        if (pin9==true){
            contador--;
        }
            
        if (contador==0){
            gpio_put_masked(0x7f,cero);
        }
    
        if(contador==1){
            gpio_put_masked(0x7F,uno);
        }
        if(contador==2){
            gpio_put_masked(0x7F,dos);
        }
        if(contador==3){
            gpio_put_masked(0x7F,tres);
        }
        if(contador==4){
            gpio_put_masked(0x7F,cuatro);
        }
        if(contador==5){
            gpio_put_masked(0x7F,cinco);
        }
        if(contador==6){
            gpio_put_masked(0x7F,seis);
        }
        if(contador==7){
            gpio_put_masked(0x7F,siete);
        }
        if(contador==8){
            gpio_put_masked(0x7F,ocho);
        }
        if(contador==9){
            gpio_put_masked(0x7F,nueve);
        }
        if (contador==10){
            contador--;
        }
        if (contador==-1){
            contador++;
        }
        sleep(1000);

    }    
}    

   