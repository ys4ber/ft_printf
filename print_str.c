/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaber <ysaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:47:27 by ysaber            #+#    #+#             */
/*   Updated: 2023/11/19 20:53:20 by ysaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(const char *str)
{
	int	i;
	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

static void	ft_putstr_fd(char *s, int fd)
{
	if (fd != -1)
	{
		write(fd, s, ft_strlen(s));
	}
}

int print_str(char *s)
{
    if (s == NULL)
    {	
	    ft_putstr_fd("(null)", 1);
		return (6);
	}
    else
        ft_putstr_fd(s, 1);
    return (ft_strlen(s));
}