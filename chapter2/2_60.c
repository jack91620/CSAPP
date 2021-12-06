#include <stdio.h>

unsigned replace_byte(unsigned x, int i, unsigned char b);

int main(int argc, char const *argv[])
{
    unsigned a = replace_byte(0x12345678, 2, 0xAB);
    printf("0x%X", a);

    return 0;
}

unsigned replace_byte(unsigned x, int i, unsigned char b)
{
    unsigned mask_1 = ~(0xFF << (i * sizeof(unsigned) * 2));
    unsigned mask_2 = b << (i * sizeof(unsigned) * 2);
    return (x & mask_1 | mask_2);
}