#include "printf.h"
#include <stdio.h>

int main(void)
{
    int i = 42;
    char c = 'A';
    char *s = "Hello, World!";
    unsigned int u = 1234567890;
    int x = 255;
    int p = 100;

    ft_printf("Character: %c\n", c);
    ft_printf("String: %s\n", s);
    ft_printf("Integer: %d\n", i);
    ft_printf("Unsigned Integer: %u\n", u);
    ft_printf("Hexadecimal (lowercase): %x\n", x);
    ft_printf("Hexadecimal (uppercase): %X\n", x);
    ft_printf("Percentage: %%\n");
    ft_printf("pointer: %p", &p);

    return 0;
}
