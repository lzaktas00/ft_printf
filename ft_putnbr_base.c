/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putnbr_base.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/08/27 16:06:06 by username         #+#    #+#              */
/*   Updated: 2026/08/27 16:06:06 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long long nb, char *base, int base_len)
{
	int	count;

	count = 0;
	if (nb >= (unsigned long long) base_len)
	{
		count += ft_putnbr_base((nb / base_len), base, base_len);
		count += ft_putnbr_base((nb % base_len), base, base_len);
	}
	else
		count += write(1, &base[nb], 1);
	return (count);
}
