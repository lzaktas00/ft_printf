/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   main.c                                            :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/01 22:08:42 by username         #+#    #+#              */
/*   Updated: 2026/09/01 22:17:03 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	sayi_d = 0;
	int	sayi_i = 0;

	printf("sayı yaz");
	scanf("%d %i", &sayi_d, &sayi_d);
	printf("ORG : %d\n", sayi_d);
	printf("ORG: %d\n ", sayi_i);
	ft_printf("%d\n", sayi_d);
	ft_printf("%d\n ", sayi_i);
}
