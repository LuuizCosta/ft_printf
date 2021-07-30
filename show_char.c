/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 17:42:40 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/30 17:58:54 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	show_char(va_list ap, int *full_length)
{
	char	c;

	c = va_arg(ap, int);
	write(1, &c, 1);
	*full_length += 1;
	return (*full_length);
}
