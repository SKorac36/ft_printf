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

void	ft_handlewstr(const char **format, va_list *args, t_arg_form *arg)
{
	wchar_t *str;

	str = va_arg(*args, wchar_t *);
	while (*str)
		write(1, str++, 1);
}
