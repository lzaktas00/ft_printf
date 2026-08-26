#include "ft_printf.h"

static int  ft_format_control(char fs, va_list args)
{
    int i;

    i = 0;
    if (fs == 'c')
        return (ft_putchar_fd(va_arg(*args, int)));
    else if (fs == 'd' || fs == 'i')
        return (ft_putnbr_fd(va_arg(*args, int)));
    else if (fs == 's')
        return (ft_putstr_fd(va_arg(*args, char)));
    else if (fs == 'p')
        return (ft_putptr(va_arg(*args, int)));
    else if (fs == 'u')
        return (ft_putunbr(va_arg(*args, int)));
    else if (fs == 'x')
        return (ft_puthex(va_arg(*args, int)));
    else if (fs == 'X') 
        return (ft_puthex(va_arg(*args, int))) ;
    else if (fs == '%')
        return (ft_putchar_fd('%'));
    return (i);
}


int ft_printf(const char*, ...)
{

}

