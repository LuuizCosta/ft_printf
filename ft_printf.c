/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 13:21:42 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/30 17:59:16 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		length;
	int		full_length;

	length = 0;
	full_length = 0;
	va_start(ap, format);
	while (format[length] != '\0')
	{
		if (format[length] == '%')
		{
			length++;
			convert(format, ap, &length, &full_length);
		}
		else
		{
			write(1, &format[length], 1);
			length++;
			full_length++;
		}
	}
	va_end(ap);
	return (full_length);
}
