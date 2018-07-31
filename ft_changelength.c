/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_changelength.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 14:39:17 by skorac            #+#    #+#             */
/*   Updated: 2018/07/31 15:41:51 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <sys/types.h>
#include <stdarg.h>
#include "handle_funcs.h"

uintmax_t	ft_changelength(va_list *args, t_arg *arg)
{
	uintmax_t nbr;

	nbr = va_arg(*args, uintmax_t);
	if (arg->length == hh)
		nbr = (unsigned char)nbr;
	else if (arg->length == h)
		nbr = (unsigned short int )nbr;
	else if (arg->length == l)
		nbr = (unsigned long int)nbr;
	else if (arg->length == ll)
		nbr = (unsigned long long int)nbr;
	else if (arg->length == j)
		nbr = (uintmax_t)nbr;
	else if (arg->length == z)
		nbr = (size_t)nbr;
	else
		nbr = (unsigned int)nbr;
	return (nbr);
}
