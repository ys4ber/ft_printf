/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uns_dec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaber <ysaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:10:14 by ysaber            #+#    #+#             */
/*   Updated: 2023/11/19 20:35:28 by ysaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_uns_dec(unsigned int n)
{
    int count;

    count = 0;
    if (n >= 10)
        count += print_uns_dec(n / 10);
    count += ft_putchar_fd(1,  '0' + (n % 10));
    return count;
}

// int main()
// {
//     print_uns_dec(12345);
// }
