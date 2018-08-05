/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlehex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 12:30:50 by skorac            #+#    #+#             */
/*   Updated: 2018/08/05 13:29:40 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	ft_handlehex(unsigned int num, t_arg_form *form)
{
	if (form->specifier == 'X')
		ft_puthex(num);
	else if (form->specifier == 'x')
		ft_puthex(num);
}
