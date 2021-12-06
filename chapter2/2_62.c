#include <stdio.h>

int int_shifts_are_arithmetic(void);

int main(int argc, char const *argv[])
{
    int b;
    b = int_shifts_are_arithmetic();
    printf("%d", b);
    return 0;
}

int int_shifts_are_arithmetic(void)
{
    int a = 0;
    a = ~a;
    int shift_val = sizeof(int) << 3;
    a = a >> shift_val;

    return (a != 0);
}
