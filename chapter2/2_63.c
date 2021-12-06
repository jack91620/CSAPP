#include <stdio.h>

unsigned srl(unsigned x, int k);
int sra(int x, int k);

int main(int argc, char const *argv[])
{
    
    return 0;
}

unsigned srl(unsigned x, int k)
{
    unsigned xsra = (int) x >> k;
    unsigned bitmask = (~0) << k;
    return (xsra ^ bitmask);
}
int sra(int x, int k)
{
    int xsrl = (unsigned) x >> k;
}