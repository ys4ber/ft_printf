/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_poi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaber <ysaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:28:29 by ysaber            #+#    #+#             */
/*   Updated: 2023/11/19 20:06:19 by ysaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_poi(unsigned long c)
{
	int count;

	count = 0;
	print_str("0x");
	count = print_low_hex(c);
	return (count + 2);
}