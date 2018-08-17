/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_spec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 15:01:12 by skorac            #+#    #+#             */
/*   Updated: 2018/08/16 15:19:43 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_flag_spec(char *p, t_arg_form *arg)
{
	size_t i;

	i = 0;
	while (p[i])
	{
		if (ft_strchr(MOD_SPEC, p[i]))
		{
			arg->specifier = p[i];
			break ;
		}
		else
			i++;
	}
}
