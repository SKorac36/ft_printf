/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:21:36 by skorac            #+#    #+#             */
/*   Updated: 2018/08/06 14:12:40 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	ft_handleptr(const char **format, va_list *args, t_arg_form *arg)
{
	(void)format;
	long temp;
	
	temp = (long)va_arg(args, char *);
	ft_putstr("0x");
	ft_putstr(ft_itoabase(temp, 16));
	ft_puthex(temp);

}
