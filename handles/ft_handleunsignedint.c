/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleunsignedint.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 12:28:21 by skorac            #+#    #+#             */
/*   Updated: 2018/08/05 13:32:03 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

size_t	ft_handleunsignedint(va_list *args, t_arg_form *arg, char **format)
{
	uintmax_t n;

	(void)format;
	n = ft_getlength(args, arg);
	ft_putnbr(n);
	return (ft_numlen(n));
}
