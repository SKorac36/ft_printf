/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlechar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 11:41:45 by skorac            #+#    #+#             */
/*   Updated: 2018/08/14 15:45:38 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

size_t	ft_handlechar(va_list *args, t_arg_form *arg)
{
	char c;

	c = va_arg(*args, int);
	ft_putchar(c);
	(void)arg;
	return (1);
}
