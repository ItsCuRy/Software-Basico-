#include <stdio.h>

unsigned char switch_byte(unsigned char x){
unsigned char a = x >>=4; 
unsigned char b = x <<=4; 
unsigned char c = a & b;
return c;
}

int main(){
x = switch_byte(0xAB)
printf(x)
}
