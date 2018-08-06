/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extractformat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 09:51:24 by skorac            #+#    #+#             */
/*   Updated: 2018/08/06 09:40:52 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

unsigned int	findpercent(const char *str)
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

size_t			findlen(const char *str)
{
	size_t n;

	n = 1;
	while (ft_isalpha(str[n]) == 0)
		   n++;
	return (n);
}

char			*extractformat(const char *str)
{
	char *ret;

	if (str[findpercent(str)] + 1 == '%')
		return ("%");
	ret = ft_strsub(str, findpercent(str) + 1, findlen(str));
	return (ret);
}
