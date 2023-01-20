/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utilitaires.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 04:55:47 by tdelgran          #+#    #+#             */
/*   Updated: 2023/01/20 17:02:18 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_putnbr(int nb, int *stock)
{
	if (nb == -2147483648)
	{
		format_putstr("-2147483648", stock);
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		format_char('-', stock);
	}
	if (nb > 9)
	{
		format_putnbr(nb / 10, stock);
		format_putnbr(nb % 10, stock);
	}
	else
	{
		format_char(nb + '0', stock);
	}
}

void	format_putstr(char *str, int *stock)
{
	int	i;

	i = 0;
	if (!str)
	{
		format_putstr("(null)", stock);
		return ;
	}
	while (str[i] != '\0')
	{
		format_char(str[i], stock);
		i++;
	}
}

void	format_putnbrbase(unsigned long nb, char *a, int *stock)
{
	if (nb >= 16)
	{
		format_putnbrbase(nb / 16, a, stock);
		format_putnbrbase(nb % 16, a, stock);
	}
	else
	{
		format_char(a[nb], stock);
	}
}

void	format_putnbr_u(unsigned int nb, int *stock)
{
	if (nb > 9)
	{
		format_putnbr(nb / 10, stock);
		format_putnbr(nb % 10, stock);
	}
	else
	{
		format_char(nb + '0', stock);
	}
}

void	format_hexa(unsigned int nb, int a, int *stock)
{
	char	*b;
	char	i;

	if (a == 0)
		b = "0123456789abcdef";
	if (a == 1)
		b = "0123456789ABCDEF";
	if (nb >= 16)
	{
		format_putnbrbase(nb / 16, b, stock);
		format_putnbrbase(nb % 16, b, stock);
	}
	if (nb < 16)
	{
		i = b[nb];
		format_char(i, stock);
	}
}
