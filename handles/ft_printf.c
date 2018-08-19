/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 07:20:42 by skorac            #+#    #+#             */
/*   Updated: 2018/08/16 15:56:21 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

ssize_t	ft_dohandles(va_list *args, t_arg_form *sarg)
{
	if (sarg->specifier == 'c' || sarg->specifier == 'C')
		return (ft_handlewchr(args, sarg));
	else if (sarg->specifier == 's')
		return (ft_handlestr(args, sarg));
	else if (sarg->specifier == 'S')
		return (ft_handlewstr(args, sarg));
	else if (sarg->specifier == '%')
		return (ft_handleper(args, sarg));
	else if (sarg->specifier == 'd' || sarg->specifier == 'i')
		return (ft_handleint(args, sarg));
	else if (sarg->specifier == 'D' || sarg->specifier == 'O'
			|| sarg->specifier == 'U')
		return (ft_handlelong(args, sarg));
	else if (sarg->specifier == 'o')
		return (ft_handleoctal(args, sarg));
	else if (sarg->specifier == 'x' || sarg->specifier == 'X')
		return (ft_handlehex(args, sarg));
	else if (sarg->specifier == 'p')
		return (ft_handleptr(args, sarg));
	else if (sarg->specifier == 'u')
		return (ft_handleunsignedint(args, sarg));
	else
		return (0);
}

static ssize_t	handle_arg(char **format, va_list *args, t_arg_form *sarg)
{
	ssize_t		ret;
	size_t		handler;

	sarg = ft_initflags();
	if ((*(++*format)) == '\0')
		return (0);
	if (**format == '\0')
		return (0);
	if (ft_flag_spec(*format, sarg) == 0)
		handler = -1;
	else
		handler = ft_dohandles(args, sarg);
	ret = handler;
	(*format)++;
	return (ret);
}

static int		ft_inner_printf(const char *format, va_list *args, size_t chrs)
{
	char		*next_arg;
	t_arg_form	sarg;
	ssize_t		handler_len;

	next_arg = ft_strchr(format, '%');
	if (*format == '\0')
		return (chrs);
	if (next_arg == NULL)
	{
		ft_putstr(format);
		return (chrs + ft_strlen(format));
	}
	else if (next_arg > format)
	{
		ft_putnstr(format, next_arg - format);
		return (ft_inner_printf(next_arg, args, chrs + (next_arg - format)));
	}
	else
	{
		ft_bzero(&sarg, sizeof(sarg));
		if ((handler_len = handle_arg((char**)&format, args, &sarg)) == -1)
			return (-1);
		else
			return (ft_inner_printf(format, args, chrs + handler_len));
	}
}

int				ft_printf(const char *format, ...)
{
	va_list	args;
	int		ret;

	va_start(args, format);
	ret = ft_inner_printf(format, &args, 0);
	va_end(args);
	return (ret);
}
