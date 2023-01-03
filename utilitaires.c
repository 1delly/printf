/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utilitaires.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 04:55:47 by tdelgran          #+#    #+#             */
/*   Updated: 2023/01/03 15:44:03 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	format_char(int c)
{
	write (1, &c, 1);
	return (1);
}

int	format_putnbr(int nb)
{
	if (nb >= 0 && nb <= 9)
	{
		format_char(nb + '0');
	}
	else if (nb < 0)
	{
		format_char('-');
		format_putnbr(nb * (-1));
	}
	else
	{
		format_putnbr(nb / 10);
		format_putnbr(nb % 10);
	}
}

int	format_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	format_hexa(int n)
{
	char	hex;
	int		i;
	int		temp;

	i = 0;
	temp = n 
}