/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_hexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 15:53:49 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/30 18:42:41 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	show_hexa1(va_list ap, int *full_length)
{
	unsigned int	hexa;
	char			*hexabase;

	hexabase = "0123456789abcdef";
	hexa = va_arg(ap, unsigned int);
	write_hexa(hexabase, hexa, full_length);
	return (*full_length);
}

int	show_hexa2(va_list ap, int *full_length)
{
	unsigned int	hexa;
	char			*hexabase;

	hexabase = "0123456789ABCDEF";
	hexa = va_arg(ap, unsigned int);
	write_hexa(hexabase, hexa, full_length);
	return (*full_length);
}

int	write_hexa(char *base, unsigned int hexa, int *full_length)
{
	if (hexa / 16 > 0)
		write_hexa(base, hexa / 16, full_length);
	write(1, &base[hexa % 16], 1);
	*full_length += 1;
	return (*full_length);
}

int	show_pointer(va_list ap, int *full_length)
{
	unsigned long long int	ptr;
	char					*hexabase;

	hexabase = "0123456789abcdef";
	ptr = va_arg(ap, unsigned long long int);
	write(1, "0x", 2);
	*full_length += 2;
	write_pointer(hexabase, ptr, full_length);
	return (*full_length);
}

int	write_pointer(char *base, unsigned long long int ptr, int *full_length)
{
	if (ptr / 16 > 0)
		write_hexa(base, ptr / 16, full_length);
	write(1, &base[ptr % 16], 1);
	*full_length += 1;
	return (*full_length);
}