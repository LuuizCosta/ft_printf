/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 17:07:56 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/30 18:42:16 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define	FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>


char		*ft_itoa(int n);
char		*ft_utoa(unsigned int n);
int			show_not_a_param(int *full_length);
int			write_hexa(char *base, unsigned int hexa, int *full_length);
int			show_hexa1(va_list ap, int *full_length);
int			show_hexa2(va_list ap, int *full_length);
int			show_pointer(va_list ap, int *full_length);
int			ft_printf(const char *format, ...);
int			convert(const char *format, va_list ap, int *index, int *fl);
int			show_char(va_list ap, int *full_length);
int			show_string(va_list ap, int *full_length);
int			ft_strlen(char *str);
int			show_percentage(int *full_length);
int			show_numbers(va_list ap, int *full_length);
int			show_unsigned(va_list ap, int *full_length);
void		string(char *s, unsigned int num, int digits, int neg);
void		ustring(char *s, unsigned int num, int digits);
int			digit_count(int n);
int			udigit_count(unsigned int n);
int			write_pointer(char *base, unsigned long long int ptr, int *full_length);

#endif