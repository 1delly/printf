#include "printf.h"
#include <stdio.h>

int main(void)
{
    //int t = 10;
    //char *str = "salut a tous\n";

    printf("Sa taille: %d\n", ft_printf("Ma fonction: %c\n", 'a'));
    printf("Sa taille: %d\n", printf("Printf: %c\n", 'a'));
}
