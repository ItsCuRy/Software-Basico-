#include <stdio.h>

unsigned char switch_byte(unsigned char x){
unsigned char a = x >> 4; 
unsigned char b = x << 4; 
return a | b;
}

int main(){
unsigned char teste = 0xab;
printf("%x\n", teste);
printf("%x\n", switch_byte(teste));
return 0;
}
