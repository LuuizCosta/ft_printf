/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 21:31:30 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/30 18:07:55 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	digit_count(int n)
{
	int				digits;
	unsigned int	nbr;

	nbr = n;
	digits = 1;
	if (n < 0)
	{
		nbr = -n;
		digits++;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		digits ++;
	}
	return (digits);
}

void	string(char *s, unsigned int num, int digits, int neg)
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
	if (neg < 0)
		s[0] = '-';
}

char	*ft_itoa(int n)
{
	char			*s;
	unsigned int	num;
	int				digits;
	int				neg;

	neg = 0;
	s = (char *)malloc((digit_count(n) + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	num = n;
	digits = digit_count(n);
	if (n < 0)
	{
		neg = -1;
		num = (n * -1);
	}
	string(s, num, digits, neg);
	return (s);
}
