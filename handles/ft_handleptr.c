/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:21:36 by skorac            #+#    #+#             */
/*   Updated: 2018/08/06 14:12:40 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

size_t	ft_handleptr(const char **format, va_list *args, t_arg_form *arg)
{
	uintmax_t temp;
	size_t len;
	
	(void)format;
	len = ft_strlen(ft_itoabase) + 2;
	temp = ft_changelength(args, arg);
	ft_putstr("0x");
	ft_putstr(ft_itoabase(temp, 16));
	return (len);
}
