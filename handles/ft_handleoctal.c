/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleoctal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 12:21:01 by skorac            #+#    #+#             */
/*   Updated: 2018/08/05 13:30:08 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

size_t	ft_handleoctal(va_list *args, t_arg_form *arg, char **format)
{
	uintmax_t n;

	(void)format;
	n = ft_giveunsigned(args, arg);
	if (arg->flag_pound && n == 0)
	{
		if (arg->width != 0 && arg->flag_left_just == 0)
			ft_pad(ft_numlen(n), arg);
		ft_putchar("0");
		if (arg->width != 0 && arg->flag_left_just == 1)
			ft_pad(1, arg);
		return (arg->width + 1);
	}
	ft_putoctal(n);
	return (arg);
}
