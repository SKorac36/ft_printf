/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleeye.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 12:12:16 by skorac            #+#    #+#             */
/*   Updated: 2018/08/04 12:20:05 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	ft_handleeye(int i)
{
	char *tmp;
	int n;

	tmp = ft_itoa(i);
	if (tmp[0] == "0")
	{
		if (tmp[1] == "x")
			ft_puthex(i);
		else
			ft_putoctal(i);
	}
	else
		ft_putnbr(i);
}
