/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:56:41 by tdelgran          #+#    #+#             */
/*   Updated: 2023/01/20 17:06:30 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_char(int c, int *stock)
{
	write (1, &c, 1);
	(*stock)++;
}

void	printf_conversion(va_list arg, char format, int *stock)
{
	int	i;

	i = 0;
	if (format == 'c')
		format_char(va_arg(arg, int), stock);
	else if (format == 's')
		format_putstr(va_arg(arg, char *), stock);
	else if (format == 'p')
	{
		format_putstr("0x", stock);
		format_putnbrbase(va_arg(arg, unsigned long),
			"0123456789abcdef", stock);
	}
	else if (format == 'd' || format == 'i')
		format_putnbr(va_arg(arg, int), stock);
	else if (format == 'u')
		format_putnbr_u(va_arg(arg, unsigned int), stock);
	else if (format == 'x')
		format_hexa(va_arg(arg, unsigned int), 0, stock);
	else if (format == 'X')
		format_hexa(va_arg(arg, unsigned int), 1, stock);
	else if (format == '%')
		format_char('%', stock);
}

int	ft_printf(const char *params, ...)
{
	int		i;
	va_list	arg;
	int		stock[1];

	*stock = 0;
	va_start(arg, params);
	i = 0;
	while (params[i])
	{
		if (params[i] == '%')
		{
			printf_conversion(arg, params[i + 1], stock);
			i++;
		}
		else
			format_char(params[i], stock);
		i++;
	}
	va_end(arg);
	return (*stock);
}
