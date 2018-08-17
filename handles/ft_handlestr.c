/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlestr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:37:12 by skorac            #+#    #+#             */
/*   Updated: 2018/08/14 12:47:31 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

size_t	ft_handlestr(va_list *args, t_arg_form *arg)
{
	size_t	len;
	char	*str;

	str = va_arg(*args, char *);
	len = ft_strlen(str);
	ft_putstr(str);
	arg->length = none;
	return (len);
}
