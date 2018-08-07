/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleeye.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 12:12:16 by skorac            #+#    #+#             */
/*   Updated: 2018/08/06 14:34:02 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../ft_printf.h"

void	ft_handleeye(const char *fmt, va_list *args, t_arg_form *arg)
{
	char *tmp;
	intmax_t n;

	(void)fmt;
	n = ft_getsigned(args, arg);
	tmp = ft_itoa(n);
	if (tmp[0] == "0")
	{
		if (tmp[1] == "x")
			ft_puthex(n);
		else
			ft_putoctal(n);
	}
	else
		ft_putnbr(n);
}
