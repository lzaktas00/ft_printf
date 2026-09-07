/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liaktas@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 17:26:59 by username          #+#    #+#             */
/*   Updated: 2026/09/07 17:49:51 by liaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_sign(long long nb)
{
	int	rtn;

	rtn = 0;
	if (nb < 0)
	{
		rtn += ft_putchar('-');
		nb = -nb;
	}
	rtn += ft_putnbr_base((unsigned long long) nb, "0123456789", 10);
	return (rtn);
}

int	ft_puthex(char fs, unsigned long long nb)
{
	int	rtn;

	rtn = 0;
	if (fs == 'p')
	{
		if (!nb)
			return (ft_putstr("(nil)"));
		rtn += write(1, "0x", 2);
		rtn += ft_putnbr_base(nb, "0123456789abcdef", 16);
	}
	else if (fs == 'd' || fs == 'i')
		rtn += ft_put_sign((int) nb);
	else if (fs == 'x')
		rtn += ft_putnbr_base(nb, "0123456789abcdef", 16);
	else if (fs == 'X')
		rtn += ft_putnbr_base(nb, "0123456789ABCDEF", 16);
	else if (fs == 'u')
		rtn += ft_putnbr_base(nb, "0123456789", 10);
	return (rtn);
}
