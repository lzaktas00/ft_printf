#include "ft_printf.h"

int ft_putstr(char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;
    if (!str)
        return (ft_putstr("(null)"));
    while(str[i])
    {
        count += ft_putchar(str[i]);
        i++;
    }
    return(count);
}