/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlestr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:37:12 by skorac            #+#    #+#             */
/*   Updated: 2018/08/06 13:59:18 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

size_t	ft_handlestr(const char **format, va_list *args, t_arg_form *arg)
{
	size_t len;
	char	*str;

	(void)format;
	(void)arg;
	str = va_arg(*args, char *);	 
	len = ft_strlen(str);
	arg->width = len;
	ft_putstr(str);
	return (len);
}
