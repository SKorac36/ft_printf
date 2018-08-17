/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 11:37:35 by skorac            #+#    #+#             */
/*   Updated: 2018/08/16 13:03:50 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char		*ft_utoabase(uintmax_t nb,
const unsigned int base)
{
	char						*ret;
	static unsigned int			loop;
	static unsigned int			i;
	unsigned long long int		mem;

	if (base < 2 || base > 36)
		return (NULL);
	if (nb == 0)
	{
		if ((ret = ft_memalloc(sizeof(char) * (loop > 0 ? loop + 1 : 2))) ==
				NULL)
			return (NULL);
		if (loop == 0)
			ret[0] = '0';
		loop = 0;
		i = 0;
		return (ret);
	}
	loop++;
	mem = nb % base;
	ret = ft_utoabase(nb / base, base);
	ret[i++] = (mem < 10) ? (char)mem + '0' : (char)mem - 10 + 'a';
	return (ret);
}
