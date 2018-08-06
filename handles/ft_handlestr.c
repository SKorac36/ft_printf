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

void	ft_handlestr(const char **format, va_list *args, t_arg_form *arg)
{
	(void)format;
	(void)arg;
	ft_putstr(va_arg(args, char *));
}
