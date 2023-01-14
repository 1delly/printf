/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:56:41 by tdelgran          #+#    #+#             */
/*   Updated: 2023/01/14 03:41:03 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	printf_conversion(va_list arg, char format)
{
	int	i;

	i = 0;
	if (format == 'c')
		i += format_char(va_arg(arg, int));
	else if (format == 's')
		i += format_strlen(va_arg(arg, char *));
	else if (format == 'p')
		i += format_putnbr(va_arg(arg, unsigned int));
	else if (format == 'd')
		i += format_putnbr(va_arg(arg, int));
	else if (format == 'i')
		i += format_putnbr(va_arg(arg, int));
	else if (format == 'u')
		i += format_putnbr(va_arg(arg, unsigned int));
	else if (format == 'x')
		i += format_hexa(va_arg(arg, int));
	else if (format == 'X')
		i += format_hexa(va_arg(arg, int));
	else if (format == '%')
		i += format_char('%');
	return (i);
}

int	ft_printf(const char *params, ...)
{
	int		i;
	va_list	arg;
	int		stock;

	stock = 0;
	va_start(arg, params);
	i = 0;
	while (params[i])
	{
		if (params[i] == '%')
		{
			stock += printf_conversion(arg, params[i + 1]);
			i++;
		}
		format_char(params[i]);
		i++;
	}
	va_end(arg);
	return (stock);
}
