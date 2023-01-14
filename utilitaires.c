/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utilitaires.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 04:55:47 by tdelgran          #+#    #+#             */
/*   Updated: 2023/01/14 03:46:55 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	format_char(int c)
{
	write (1, &c, 1);
	return (1);
}

int	format_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
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
	return(nb);
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

int	format_putnbrbase(int nb)
{
	
}
