/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extractformat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 09:51:24 by skorac            #+#    #+#             */
/*   Updated: 2018/07/31 10:41:01 by skorac           ###   ########.fr       */
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

size_t	findlen(const char *str)
{
	size_t n;

	n = 1;
	while (ft_isalpha(str[n]) == 0)
		   n++;
	return (n);
}

char	*extractformat(const char *str)
{
	char *ret;

	ret = ft_strsub(str, findpercent(str) + 1, findlen(str));
	return (ret);
}

int		main()
{
	const char *str;
	char	*ret;

	str = "  %+      i";
	ret = extractformat(str);
	printf("%s\n", ret);
	return (0);
}
