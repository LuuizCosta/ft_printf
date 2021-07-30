/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_not_a_param.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 15:47:45 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/30 17:58:46 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	show_not_a_param(int *full_length)
{
	write(1, "%", 1);
	*full_length += 1;
	return (*full_length);
}
