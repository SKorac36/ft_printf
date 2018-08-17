/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extractformat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 09:51:24 by skorac            #+#    #+#             */
/*   Updated: 2018/08/17 10:13:05 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

size_t			ft_findlen(const char *str)
{
	size_t	n;

	n = 1;
	while (ft_isalpha(str[n] == 0))
		n++;
	return (n);
}

char			*ft_extractformat(const char *str, int i)
{
	char *ret;

	ret = ft_strsub(str, i + 1, ft_findlen(str));
	return (ret);
}
