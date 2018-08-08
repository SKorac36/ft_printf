/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkflags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 10:30:13 by skorac            #+#    #+#             */
/*   Updated: 2018/08/08 10:35:20 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

char	*checkflags(const char *fmt, t_arg_form *arg)
{
	if (*fmt == '#' || *fmt == '-' || *fmt == '+' || *fmt == ' '
			|| *fmt == '0')
	{
		if (ft_strchr(fmt, '#'))
			arg->flag_pound = 1;
		if (ft_strchr(fmt, '-'))
		{
			arg->flag_left_just = 1;
			arg->flag_zero = 0;
		}
		if (ft_strchr(fmt, '+'))
		{
			arg->flag_plus = 1;
			arg->flag_space = 0;
		}
		if (ft_strchr(fmt, ' '))
			arg->flag_space = 1;
		if (ft_strchr(fmt, '0'))
			arg->flag_zero = 1;
		return (checkflags(fmt, arg));
		fmt++;
	}
	else
		return (*fmt);
}

char	*checkwidth(const char *fmt, t_arg_form *arg)
{
	while (ft_isdigit(*fmt))
	{
		arg->width = arg->width * 10 + *fmt - 0;
		fmt++;
	}
	return (*fmt);
}

char	*checklength(const char *fmt, t_arg_form *arg)
{
	if (*fmt == 'h' && *(fmt + 1) == 'h')
	{
		arg->length = hh;
		return (fmt += 2);
	}
	else if (*fmt == 'l' && *(fmt + 1) == 'l')
	{
		arg->length = ll;
		return (fmt += 2);
	}
	else if (*fmt == 'h' || *fmt == 'l' || *fmt == 'j' ||
					*fmt == 'z')
	{
		if (*fmt == 'h')
			arg->length = h;
		else if (*fmt == 'l')
			arg->length = l;
		else if (*fmt == 'j')
			arg->length = j;
		else if (*fmt == 'z')
			arg->length = z;
		return ((fmt)++);
	}
	else
		return (*fmt);
}
