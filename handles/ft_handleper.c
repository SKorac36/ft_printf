/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:42:33 by skorac            #+#    #+#             */
/*   Updated: 2018/08/06 14:14:03 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

size_t	ft_handleper(const char **format, va_list *args, t_arg_form *arg)
{
	(void)format;
	(void)args;
	(void)arg;
	arg->width = 1;
	ft_putchar("%");
	return (arg->width);
}
