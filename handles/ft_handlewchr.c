/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlewchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:48:44 by skorac            #+#    #+#             */
/*   Updated: 2018/08/06 14:21:34 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	ft_handlewchr(const char **format, va_list *args, t_arg_form *arg)
{
	wchar_t	c;
	
	(void)format;
	c = (wchar_t)va_arg(*args, wint_t);
	write(1, &c, 1);
}
