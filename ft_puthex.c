#include "ft_printf.h"

int ft_puthex(char fs, unsigned long long nb)
{
    int rtn;

    rtn = 0;
    if (fs == 'p')
    {
        if(!nb)
            return (ft_putstr("(nil)"));
        rtn += write(1, "0x", 2);
        rtn += ft_putnbr_base(nb, "0123456789abcdef", 16);
    }
    else if (fs == 'd' || fs == 'i')
    {
        if ((long long)nb < 0)
        {
            rtn += ft_putchar('-');
            nb = -(long long)nb;
        }
        rtn += ft_putnbr_base(nb, "0123456789", 10);
    }
    else if (fs == 'x')
        rtn += ft_putnbr_base(nb, "0123456789abcdef", 16);
    else if (fs == 'X')
        rtn += ft_putnbr_base(nb, "0123456789ABCDEF", 16);
    else if (fs == 'u')
        rtn += ft_putnbr_base(nb, "0123456789", 10);
    return (rtn);
}