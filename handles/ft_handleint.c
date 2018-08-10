/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:41:18 by skorac            #+#    #+#             */
/*   Updated: 2018/08/06 14:13:48 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

size_t	ft_handleint(va_list *args, t_arg_form *argm const char **format)
{
	intmax_t nbr;
	size_t len;
	
	(void)format;
	nbr = ft_getsigned(args, arg);
	len = ft_getnum(nbr);
	if (arg->flag_plus)
	{
		len += 1;
		if (nbr >= 0)
			ft_putchar("+");
		ft_putnbr(nbr);
	}
	return (len);
}
