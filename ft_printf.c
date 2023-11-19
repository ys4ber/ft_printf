/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaber <ysaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:03:26 by ysaber            #+#    #+#             */
/*   Updated: 2023/11/19 20:17:27 by ysaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int printing(char c, va_list a)
{
	int	n;

	n = 0;
	if (c == 'c')
		n += ft_putchar_fd(1, va_arg(a, int));
	else if (c == 's')
		n += print_str(va_arg(a, char *));
	else if (c == 'u')
		n += print_uns_dec(va_arg(a, unsigned int));
	else if (c == 'd' || c == 'i')
		n += print_int(va_arg(a, int), 1);
	else if (c == 'x')
		n += print_low_hex(va_arg(a, unsigned int));
	else if (c == 'X')
		n += print_upp_hex(va_arg(a, unsigned int));
	else if (c == '%')
		n += ft_putchar_fd(1, '%');
	else if (c == 'p')
		n += print_poi(va_arg(a, unsigned long));
	else
		n += ft_putchar_fd(1, c);
	return (n);
}

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ptr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += printing( str[i + 1], ptr);
			i++;
		}
		else
			count += ft_putchar_fd(1, str[i]);
		i++;
	}
	return (count);
}
