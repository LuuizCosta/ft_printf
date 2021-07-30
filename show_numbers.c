/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 22:14:41 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/30 17:58:42 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	show_numbers(va_list ap, int *full_length)
{
	int		numbers;
	int		index;
	char	*string;

	index = 0;
	numbers = va_arg(ap, int);
	string = ft_itoa(numbers);
	while (string[index] != '\0')
	{
		write(1, &string[index], 1);
		index++;
		*full_length += 1;
	}
	free(string);
	return (*full_length);
}

int	show_unsigned(va_list ap, int *full_length)
{
	unsigned int	numbers;
	int				index;
	char			*string;

	index = 0;
	numbers = va_arg(ap, unsigned int);
	string = ft_utoa(numbers);
	while (string[index] != '\0')
	{
		write(1, &string[index], 1);
		index++;
		*full_length += 1;
	}
	free(string);
	return (*full_length);
}
