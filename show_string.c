/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 21:41:23 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/27 21:50:39 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	show_string(va_list ap, int *full_length)
{
	char	*str;
	int		index;

	str = va_arg(ap, char *);
	if (!str)
	{
		write(1, "(null)", 6);
		*full_length += 6;
		return (*full_length);
	}
	*full_length += ft_strlen(str);
	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
	return (*full_length);
}
