/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 07:20:42 by skorac            #+#    #+#             */
/*   Updated: 2018/08/17 10:31:24 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

size_t	ft_dohandles(va_list *args, t_arg_form *arg)
{
	if (arg->specifier == 'c' || arg->specifier == 'C')
		return (ft_handlewchr(args, arg));
	else if (arg->specifier == 's')
		return (ft_handlestr(args, arg));
	else if (arg->specifier == 'S')
		return (ft_handlewstr(args, arg));
	else if (arg->specifier == '%')
		return (ft_handleper(args, arg));
	else if (arg->specifier == 'd' || arg->specifier == 'i')
		return (ft_handleint(args, arg));
	else if (arg->specifier == 'D' || arg->specifier == 'O'
			|| arg->specifier == 'U')
		return (ft_handlelong(args, arg));
	else if (arg->specifier == 'o')
		return (ft_handleoctal(args, arg));
	else if (arg->specifier == 'x' || arg->specifier == 'X')
		return (ft_handlehex(args, arg));
	else if (arg->specifier == 'p')
		return (ft_handleptr(args, arg));
	else if (arg->specifier == 'u')
		return (ft_handleunsignedint(args, arg));
	else
		return (0);
}

void	ft_doit(const char *format, t_arg_form *arg, size_t i)
{
	char *fmt;

	fmt = ft_extractformat(format, i);
	ft_flag_spec(fmt, arg);
	ft_strdel(&fmt);
}

size_t	ft_printf(const char *format, ...)
{
	va_list			args;
	size_t			len;
	t_arg_form		*arg;
	size_t			i;

	i = 0;
	len = 0;
	va_start(args, format);
	arg = ft_initflags();
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			ft_doit(format, arg, i++);
			len += ft_dohandles(&args, arg);
		}
		else if (format[i] != '%')
		{
			len++;
			ft_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (len);
}
