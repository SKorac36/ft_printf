/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:42:33 by skorac            #+#    #+#             */
/*   Updated: 2018/08/06 14:14:03 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

size_t	ft_handleper(va_list *args, t_arg_form *arg, const char **format)
{
	(void)format;
	(void)args;
	(void)arg;
	if (arg->width != 0 && arg->flag_left_just == 0)
		ft_pad(1, arg);
	ft_putchar("%");
	if (arg->width != 0 && arg->flag_left_just)
		ft_pad(1, arg);
	return (arg->width + 1);
}
