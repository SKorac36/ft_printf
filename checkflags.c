/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkflags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 09:16:04 by skorac            #+#    #+#             */
/*   Updated: 2018/08/06 10:39:24 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	checkflags(const char *fmt, t_arg_form *arg)
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
}
