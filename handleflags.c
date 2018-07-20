/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handleflags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 10:29:40 by skorac            #+#    #+#             */
/*   Updated: 2018/07/20 12:22:01 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



char	*handlehashtag(char c)
{
	
	if (HASHTAG == 1)
	{
		if (c == 'x')
			return ("0x")	
		else if (c == 'X')
			return ("0X");
		else if (c == 'o')
			return ("0");
	}
	return (NULL);
}

char	handleplus(va_list arg)
{
	if (PLUS == 1)
	{
		if (arg > 0)
			return ('+');
		else
			return ('-');
	}
	return (NULL);
}

char	*handlespace(va_list arg)
{
	
	
	if (SPACE == 1)
	{
		
	}
}

