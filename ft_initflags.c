/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initflags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 14:13:07 by skorac            #+#    #+#             */
/*   Updated: 2018/08/02 14:57:02 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_arg_form	*ft_initflags(void)
{
	t_arg_form *ret;
	ret = (ta_arg_form *)malloc(sizeof(ta_arg_form));
	ret->flag_plus = 0;
	ret->flag_left_just = 0;
	ret->flag_zero = 0;
	ret->flag_space = 0;
	ret->flag_pound = 0;
	return (ret);	
}
