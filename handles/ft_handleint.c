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

void	ft_handleint(const char **format, va_list *args, t_arg_form *arg)
{
	(void)format;
	intmax_t nbr;

	nbr = va_arg(args, int);
	if (arg->flag_plus)
	{
		if (nbr >= 0)
		{
			ft_putchar("+");
			ft_putnbr(nbr);
		}
		else
			ft_putnbr(nbr);
	}
}
