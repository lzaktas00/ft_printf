/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liaktas@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 17:26:59 by liaktas           #+#    #+#             */
/*   Updated: 2026/08/27 17:27:52 by liaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long long nb, char *base, int base_len)
{
	int	rtn;

	rtn = 0;
	if (nb >= (unsigned long long) base_len)
	{
		rtn += ft_putnbr_base((nb / base_len), base, base_len);
		rtn += ft_putnbr_base((nb % base_len), base, base_len);
	}
	else
		rtn += write(1, &base[nb], 1);
	return (rtn);
}
