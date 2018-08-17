/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleoctal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 12:21:01 by skorac            #+#    #+#             */
/*   Updated: 2018/08/14 12:47:04 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

size_t	ft_handleoctal(va_list *args, t_arg_form *arg)
{
	uintmax_t	n;
	char		*utoa;
	size_t		len;

	n = ft_giveunsigned(args, arg);
	utoa = ft_utoabase(n, 8);
	len = ft_strlen(utoa);
	ft_putstr(utoa);
	return (len);
}
