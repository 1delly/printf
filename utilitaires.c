/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utilitaires.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 04:55:47 by tdelgran          #+#    #+#             */
/*   Updated: 2023/01/18 19:04:30 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_char(int c, int *stock)
{
	write (1, &c, 1);
	(*stock)++;
}

void	format_putnbr(int nb, int *stock)
{
	if (nb >= 0 && nb <= 9)
	{
		format_char(nb + '0', stock);
	}
	else if (nb < 0)
	{
		format_char('-', stock);
		format_putnbr(nb * (-1), stock);
	}
	else
	{
		format_putnbr(nb / 10, stock);
		format_putnbr(nb % 10, stock);
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

void	format_putnbrbase(int nb, int *stock)
{
	if (nb >= 0 && nb <= 9)
	{
		format_char(nb + '0', stock);
	}
	else if (nb < 0)
	{
		format_char('-', stock);
		format_putnbrbase(nb * (-1), stock);
	}
	else
	{
		format_putnbrbase(nb / 16, stock);
		format_putnbrbase(nb % 16, stock);
	}
}
