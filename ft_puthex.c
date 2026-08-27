/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_puthex.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/08/27 16:04:59 by username         #+#    #+#              */
/*   Updated: 2026/08/27 16:14:12 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	{
		if (((fs == 'd' || fs == 'i') && (int) nb < 0))
		{
			rtn += ft_putchar('-');
			nb = -(int) nb;
		}
		rtn += ft_putnbr_base(nb, "0123456789", 10);
	}
	else if (fs == 'x')
		rtn += ft_putnbr_base(nb, "0123456789abcdef", 16);
	else if (fs == 'X')
		rtn += ft_putnbr_base(nb, "0123456789ABCDEF", 16);
	return (rtn);
}
