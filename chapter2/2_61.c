#include <stdio.h>

int any_bit_1(int x);
int any_bit_0(int x);
int lsb_bit_1(int x);
int msb_bit_0(int x);

int main(int argc, char const *argv[])
{
    int x;
    while(1)
    {
        scanf("%x", &x);
        printf("any_bit_1(%x) = %d\n", x, any_bit_1(x));
        printf("any_bit_0(%x) = %d\n", x, any_bit_0(x));
        printf("lsb_bit_1(%x) = %d\n", x, lsb_bit_1(x));
        printf("msb_bit_0(%x) = %d\n", x, msb_bit_0(x));
    }
    return 0;
} 

int any_bit_1(int x)
{
    return !(~x);
}
int any_bit_0(int x)
{
    return !x;
}
int lsb_bit_1(int x)
{
    //get lsb
    unsigned int x_lsb = x & 0xFF;
    //bitwise not
    unsigned int x_lsb_not = ~x_lsb;
    //get lsb after bitwisw not
    unsigned int x_lsb_not_lsb = x_lsb_not & 0xFF;
    //not
    return !x_lsb_not_lsb;
}
int msb_bit_0(int x)
{
    int shift_val = (sizeof(int) - 1) << 3;
    unsigned int x_msb = x >> shift_val;
    return (!x_msb);
}