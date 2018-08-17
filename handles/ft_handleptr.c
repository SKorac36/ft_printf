/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:21:36 by skorac            #+#    #+#             */
/*   Updated: 2018/08/14 12:47:18 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

size_t	ft_handleptr(va_list *args, t_arg_form *arg)
{
	char			*utoa;
	unsigned long	c;

	arg->length = l;
	ft_putstr("0x");
	c = va_arg(*args, unsigned long);
	utoa = ft_utoabase(c, 16);
	ft_putstr(utoa);
	return (ft_strlen(utoa) + 2);
}
