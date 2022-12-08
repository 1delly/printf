/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:45:06 by tdelgran          #+#    #+#             */
/*   Updated: 2022/12/08 16:36:29 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
