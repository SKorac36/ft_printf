/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlewstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:44:32 by skorac            #+#    #+#             */
/*   Updated: 2018/08/06 14:26:46 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

static	size_t ft_wstrlen(wchar_t *str)
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
size_t	ft_handlewstr(const char **format, va_list *args, t_arg_form *arg)
{
	wchar_t *str;
	size_t wlen;

	str = va_arg(*args, wchar_t *);
	wlen = ft_wstrlen(str);
	if (arg->width != 0 && arg->flag_left_just == 0)
		ft_pad(wlen, arg);
	ft_putwstr(str);
	if (arg->width != 0 && arg->flag_left_just)
		ft_pad(wlen, arg);
	return (wlen + (size_t)arg->width);
}
