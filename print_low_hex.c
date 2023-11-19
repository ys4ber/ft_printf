/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_low_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaber <ysaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:30:07 by ysaber            #+#    #+#             */
/*   Updated: 2023/11/19 16:42:31 by ysaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int print_low_hex(unsigned long c)
{
    char *hex;
    int count;

    hex = "0123456789abcdef";
    count = 0;
    if (c >= 16) {
        count += print_low_hex(c / 16);
    }
    ft_putchar_fd(1, hex[c % 16]);
    count++;
    return count;
}
// int main()
// {
//     print_low_hex( 123);
//     printf("%d\n", print_low_hex(1));
// }