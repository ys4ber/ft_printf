/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaber <ysaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:59:25 by ysaber            #+#    #+#             */
/*   Updated: 2023/11/19 20:21:16 by ysaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putchar_fd(int fd, char c);
int	print_int(int n, int fd);
int	print_str(char *s);
int	print_low_hex(unsigned long c);
int	print_upp_hex(unsigned long c);
int	print_uns_dec(unsigned int n);
int ft_printf(const char *, ...);
int	print_poi(unsigned long c);

#endif
