/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleunsignedint.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 12:28:21 by skorac            #+#    #+#             */
/*   Updated: 2018/08/16 15:33:33 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

size_t	ft_handleunsignedint(va_list *args, t_arg_form *arg)
{
	uintmax_t	n;
	char		*utoa;
	size_t		len;

	n = ft_giveunsigned(args, arg);
	utoa = ft_utoabase(n, 10);
	len = ft_strlen(utoa);
	ft_putstr(utoa);
	return (len);
}
