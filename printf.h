/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:26:35 by tdelgran          #+#    #+#             */
/*   Updated: 2023/01/14 02:19:00 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		format_char(int c);
int		format_putstr(char *str);
int     format_putnbr(int nb);
int     format_hexa(int n);
int	    printf_conversion(va_list arg, char format);
int     format_strlen(char *str);
int     main(void);

#endif
