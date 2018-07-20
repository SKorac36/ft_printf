/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkflags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 09:16:04 by skorac            #+#    #+#             */
/*   Updated: 2018/07/20 12:55:38 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	checkflags(const char *flags)
{
	while (*flags)
	{
		if (ft_strchr(flags, '#') != NULL)
			HASHTAG = 1;
		if (ft_strchr(flags, ' ') != NULL)
			SPACE = 1;
		if (ft_strchr(flags, '+') != NULL)
			PLUS = 1;
		if (ft_strchr(flags, '-') != NULL)
			MINUS = 1;
		if (ft_strchr(flags, '0') != NULL && MINUS == 0)
			ZERO = 1;
	}
}
