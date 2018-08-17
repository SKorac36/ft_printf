/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlewstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:44:32 by skorac            #+#    #+#             */
/*   Updated: 2018/08/14 12:57:45 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

size_t	ft_wstrlen(wchar_t *str)
{
	size_t i;

	i = 0;
	while (*str)
	{
		if (*str <= 0x7F)
			i++;
		else if (*str <= 0x7FF)
			i = i + 2;
		else if (*str <= 0x7FFF)
			i = i + 3;
		else if (*str <= 0x10FFFF)
			i = i + 4;
		str++;
	}
	return (i);
}

size_t	ft_handlewstr(va_list *args, t_arg_form *arg)
{
	wchar_t	*str;
	size_t	wlen;

	str = va_arg(*args, wchar_t *);
	wlen = ft_wstrlen(str);
	ft_putwstr(str);
	(void)arg;
	return (wlen);
}
