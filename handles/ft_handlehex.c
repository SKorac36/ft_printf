/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlehex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 12:30:50 by skorac            #+#    #+#             */
/*   Updated: 2018/08/16 13:59:55 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

size_t	ft_handlehex(va_list *args, t_arg_form *arg)
{
	uintmax_t	n;
	char		*utoa;
	size_t		len;
	int			i;

	i = 0;
	n = ft_giveunsigned(args, arg);
	utoa = ft_utoabase(n, 16);
	if (arg->specifier == 'X')
	{
		while (utoa[i])
		{
			ft_putchar(ft_toupper(utoa[i]));
			i++;
		}
	}
	else	
		ft_putstr(utoa);
	len = ft_strlen(utoa);
	return (len);
}
