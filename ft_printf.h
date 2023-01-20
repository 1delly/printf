/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:20:25 by tdelgran          #+#    #+#             */
/*   Updated: 2023/01/20 17:02:06 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	format_char(int c, int *stock);
void	format_putstr(char *str, int *stock);
void	format_putnbr(int nb, int *stock);
void	format_putnbrbase(unsigned long nb, char *a, int *stock);
void	printf_conversion(va_list arg, char format, int *stock);
void	format_putnbr_u(unsigned int nb, int *stock);
void	format_hexa(unsigned int nb, int a, int *stock);

#endif
