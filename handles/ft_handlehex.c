/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlehex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 12:30:50 by skorac            #+#    #+#             */
/*   Updated: 2018/08/05 13:29:40 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

size_t	ft_handlehex(va_list *args, t_arg_form *arg, const char **format)
{
	uintmax_t n;
	
	void(format);
	n = ft_changelength(args, arg);
	if (arg->specifier = 'X')
	{
		ft_putstr("0X");
		ft_puthex(n);
	}
	else
	{
		ft_putstr("0x");
		ft_puthex(n);
	}
	return (ft_numlen(n));
}
