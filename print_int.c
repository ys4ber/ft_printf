/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaber <ysaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:17:08 by ysaber            #+#    #+#             */
/*   Updated: 2023/11/19 21:12:55 by ysaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	return_len(long nb)
{
	int	i;
	long n;
	
	n = nb;
	i = 0;
	if (n < 0)
		i++;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	if (nb < 0)
		return (i);
	else
		return(i);
}
int	print_int(int n, int fd)
{
	char	str;
	long	nb;

	nb = (long)n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		print_int(nb / 10, fd);
		str = '0' + nb % 10;
	}
	else
		str = '0' + nb;
	write(fd, &str, 1);
	return (return_len(n) );
}

// int	print_int(int nb, int fd)
// {
// 	if (nb == -2147483648)
// 	{
// 		ft_putchar_fd(1, '-');
// 		ft_putchar_fd(1, '2');
// 		print_int(147483648, fd);
// 	}
// 	else if (nb < 0)
// 	{
// 		ft_putchar_fd(1, '-');
// 		nb *= -1;
// 		print_int(nb, fd);
// 	}
// 	else if (nb > 9)
// 	{
// 		print_int(nb / 10, fd);
// 		print_int(nb % 10, fd);
// 	}
// 	else
// 		ft_putchar_fd(1, nb + 48);
	
// 	if (nb < 0)
// 		return (return_len(nb) + 1);
// 	else
// 		return (return_len(nb));
// 	return (0);
// }
// int	main(void)
// {
// 	print_int(-10, 1);
// 	printf("\n");
// 	printf("%d\n", print_int(-10, 1));
// }