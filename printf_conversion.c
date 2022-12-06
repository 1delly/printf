/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 23:19:23 by tdelgran          #+#    #+#             */
/*   Updated: 2022/12/06 23:55:59 by tdelgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int printf_conversion(va_list arg, char format)
{
    int i;

    i = 0;
    if (format == 'c')
        i += format_char(va_arg(arg, int));
    else if (format == 's')
        i += format_putstr(va_arg(arg, char *));
    // else if (format == 'p')
    //     i += 
    return i;
}