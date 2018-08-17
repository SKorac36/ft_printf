/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initflags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 14:13:07 by skorac            #+#    #+#             */
/*   Updated: 2018/08/14 15:00:59 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_arg_form	*ft_initflags(void)
{
	t_arg_form *ret;

	ret = (t_arg_form *)malloc(sizeof(t_arg_form));
	ret->length = none;
	return (ret);
}
