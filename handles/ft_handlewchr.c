/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlewchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:48:44 by skorac            #+#    #+#             */
/*   Updated: 2018/08/14 12:57:22 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

size_t	ft_wchrlen(wchar_t c)
{
	size_t i;

	i = 0;
	if (c <= 0x7F)
		i++;
	else if (c <= 0x7FF)
		i = i + 2;
	else if (c <= 0x7FFF)
		i = i + 3;
	else if (c <= 0x10FFFF)
		i = i + 4;
	return (i);
}

size_t	ft_handlewchr(va_list *args, t_arg_form *arg)
{
	wchar_t	c;
	size_t	len;

	c = (wchar_t)va_arg(*args, wint_t);
	len = ft_wchrlen(c);
	ft_putwchar(c);
	(void)arg;
	return (len);
}
