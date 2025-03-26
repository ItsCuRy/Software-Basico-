#include <stdio.h>

unsigned char switch_byte(unsigned char x){
unsigned char a = x >> 4; 
unsigned char b = x << 4; 
return a | b;
}

#include <stdio.h>

unsigned char rotate_left(unsigned char x, int n) {
    return (x << n) | (x >> (8 - n));
}

int main() {
    unsigned char x = 0x61;  // 0110 0001
    unsigned char teste = 0xab;
    printf("%x\n", teste);
    printf("%x\n", switch_byte(teste));
    
    // Teste de "rotate_left" com diferentes valores de n
    printf("Original: 0x%02x\n", x);
    printf("Rotate Left 1: 0x%02x\n", rotate_left(x, 1));  // Esperado: 0xC2 (1100 0010)
    printf("Rotate Left 2: 0x%02x\n", rotate_left(x, 2));  // Esperado: 0x85 (1000 0101)
    printf("Rotate Left 7: 0x%02x\n", rotate_left(x, 7));  // Esperado: 0xB0 (1011 0000)

    return 0;
}



