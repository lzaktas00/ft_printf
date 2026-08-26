#include "ft_printf.h"

int ft_format_control(char fs, va_list args)
{
    int i;

    i = 0;
    if (fs == 'c')
    else if (fs == 'd' ||fs == 'i')
    else if (fs == 's')
    else if (fs == 'p')
    else if (fs == 'u')
    else if (fs == 'x')
    else if (fs == 'X')  
    else if (fs == '%')
        i += write(1, "%", 1);
    return (i);
}

BİLGİSAYARI KARIŞTIRMA