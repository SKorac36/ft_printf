/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checklength.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 14:57:58 by skorac            #+#    #+#             */
/*   Updated: 2018/08/16 15:55:11 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_length_spec(char *p, t_arg_form *arg, size_t i)
{
	size_t n;

	n = 0;
	while (p[n])
	{
	 	if (ft_strchr(LEN_SPEC, p[n]))
		{	
			if (p[n] == 'h'  && p[n + 1] == 'h')
				arg->length = hh;
			else if (p[n] == 'l' && p[n + 1] == 'l')
				arg->length = ll;
			else 
				arg->length = p[n];
			break ;
		}
		else
			n++;
	}
	if (arg->length == ll || arg->length == hh)
		i += 2;
	else if (arg->length != none)
		i+= 1;
}

