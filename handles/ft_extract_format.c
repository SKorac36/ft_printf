/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extractformat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 09:51:24 by skorac            #+#    #+#             */
/*   Updated: 2018/08/16 15:49:51 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"


int	ft_ismod(int n)
{
	if (n == 115 || n == 83 || n == 112 || n == 100
		|| n == 68 || n == 105 || n == 111 || n == 79 
		|| n ==  117 || n == 85 || n == 120 || n == 88 
		|| n == 99 || n == 67 || n == 37)
		return (1);
	else
		return (0);
	
}

size_t			ft_findlen(const char *str)
{
	size_t	n;

	n = 1;
	while (ft_ismod(str[n] == 0))
	{
		n++;
	}
	return (n);
}

char			*ft_extractformat(const char *str, int i)
{
	char *ret;

	ret = ft_strsub(str, i + 1, ft_findlen(str));
	return (ret);
}
