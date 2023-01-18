/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:56:41 by tdelgran          #+#    #+#             */
/*   Updated: 2023/01/18 18:44:53 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printf_conversion(va_list arg, char format, int *stock)
{
	int	i;

	i = 0;
	if (format == 'c')
		format_char(va_arg(arg, int), stock);
	else if (format == 's')
		format_putstr(va_arg(arg, char *), stock);
	else if (format == 'p')
		format_putnbr(va_arg(arg, unsigned int), stock);
	else if (format == 'd')
		format_putnbr(va_arg(arg, int), stock);
	else if (format == 'i')
		format_putnbr(va_arg(arg, int), stock);
	else if (format == 'u')
		format_putnbr(va_arg(arg, unsigned int), stock);
	else if (format == 'x')
		format_putnbrbase(va_arg(arg, unsigned long), stock);
	else if (format == 'X')
		format_putnbrbase(va_arg(arg, unsigned long), stock);
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
