/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:26:35 by tdelgran          #+#    #+#             */
/*   Updated: 2022/12/06 23:55:49 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int     ft_printf(const char *format, ...);
int     printf_conversion(va_list arg, char format);
int	    format_char(int c);
int     format_putstr(char *str);
int     ft_putstr(char *str);

#endif