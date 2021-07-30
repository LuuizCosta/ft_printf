/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_percentage.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 21:42:33 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/30 17:58:38 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	show_percentage(int *full_length)
{
	write(1, "%", 1);
	*full_length += 1;
	return (*full_length);
}
