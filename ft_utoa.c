/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 21:31:30 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/30 18:08:17 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	udigit_count(unsigned int n)
{
	int				digits;

	digits = 1;
	while (n > 9)
	{
		n = n / 10;
		digits ++;
	}
	return (digits);
}

void	ustring(char *s, unsigned int num, int digits)
{
	s[digits] = '\0';
	if (num > 9)
	{
		while (digits--)
		{
			s[digits] = (num % 10) + '0';
			num = num / 10;
		}
	}
	else
		s[digits - 1] = (num % 10) + '0';
}

char	*ft_utoa(unsigned int n)
{
	char			*s;
	int				digits;

	s = (char *)malloc((udigit_count(n) + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	digits = udigit_count(n);
	ustring(s, n, digits);
	return (s);
}
