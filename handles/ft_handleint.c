/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:41:18 by skorac            #+#    #+#             */
/*   Updated: 2018/08/16 14:24:09 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

size_t	ft_handleint(va_list *args, t_arg_form *arg)
{
	intmax_t	nbr;
	char		*ret;
	size_t		len;

	nbr = ft_getsigned(args, arg);
	ret = ft_itoabase(nbr, 10);
	len = ft_strlen(ret);
	ft_putstr(ret);
	return (len);
}
