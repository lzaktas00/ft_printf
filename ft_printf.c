#include "ft_printf.h"

static int  ft_format_control(char fs, va_list *args)
{
    if (fs == 'c')
        return (ft_putchar(va_arg(*args, int)));
    else if (fs == 'd' || fs == 'i')
        return (ft_puthex(fs, (va_arg(*args, int))));
    else if (fs == 's')
        return (ft_putstr(va_arg(*args, char *)));
    else if (fs == 'p')
        return (ft_puthex(fs, (va_arg(*args, unsigned long long int))));
    else if (fs == 'u')
        return (ft_puthex(fs, (va_arg(*args, int))));
    else if (fs == 'x')
       return (ft_puthex(fs, (va_arg(*args, int))));
    else if (fs == 'X') 
       return (ft_puthex(fs, (va_arg(*args, int))));
    else if (fs == '%')
        return (ft_putchar('%'));
    return (0);
}


int ft_printf(const char *str , ...)
{
    va_list args;
    int rtn;

    va_start(args, str);
    rtn = 0;
    while(*str)
    {
        if (*str == '%')
        {
            str++;
            if (*str == '\0')
                break;
            rtn += ft_format_control(*str, &args);
        }
        else
            rtn += write(1, str, 1);
        str++;
    }
    va_end(args);
    return (rtn);
}

