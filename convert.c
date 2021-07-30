/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 17:24:39 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/30 17:59:30 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert(const char *format, va_list ap, int *index, int *fl)
{
	if (format[*index] == 'c')
		show_char(ap, fl);
	else if (format[*index] == 's')
		show_string(ap, fl);
	else if (format[*index] == '%')
		show_percentage(fl);
	else if ((format[*index] == 'i') || (format[*index] == 'd'))
		show_numbers(ap, fl);
	else if (format[*index] == 'u')
		show_unsigned(ap, fl);
	else if (format[*index] == 'x')
		show_hexa1(ap, fl);
	else if (format[*index] == 'X')
		show_hexa2(ap, fl);
	else if (format[*index] == 'p')
		show_pointer(ap, fl);
	else
	{
		show_not_a_param(fl);
		return (*fl);
	}
	*index += 1;
	return (*fl);
}
