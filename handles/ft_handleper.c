/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:42:33 by skorac            #+#    #+#             */
/*   Updated: 2018/08/14 12:47:11 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

size_t	ft_handleper(va_list *args, t_arg_form *arg)
{
	(void)args;
	(void)arg;
	ft_putchar('%');
	return (1);
}
