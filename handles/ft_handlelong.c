/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlelong.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 11:31:57 by skorac            #+#    #+#             */
/*   Updated: 2018/08/16 12:59:18 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

size_t	ft_handlelong(va_list *args, t_arg_form *arg)
{
	arg->length = l;
	if (arg->specifier == 'D')
		return (ft_handleunsignedint(args, arg));
	if (arg->specifier == 'O')
		return (ft_handleoctal(args, arg));
	if (arg->specifier == 'U')
		return (ft_handleunsignedint(args, arg));
	return (0);
}
