/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extractformat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 09:51:24 by skorac            #+#    #+#             */
/*   Updated: 2018/08/08 10:41:43 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/libft.h"
#include <stdio.h>

unsigned int		findpercent(const char *str)
{
	unsigned int i;

	i = 0;
	if (ft_strchr(str, '%') != NULL)
	{
		while (str[i] != '%')
			i++;
	}
	return (i);
}

size_t			findlen(const char *str, t_arg_form *arg )
{
	size_t	n;
	char	c;


	c = arg->specifier;
	n = 1;
	while (str[n] != c)
		n++;
	return (n);
}

char				*extractformat(const char *str)
{
	char *ret;

	ret = ft_strsub(str, findpercent(str) + 1, findlen(str));
	return (ret);
}
