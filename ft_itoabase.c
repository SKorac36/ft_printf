/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:31:43 by skorac            #+#    #+#             */
/*   Updated: 2018/08/02 14:09:13 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include <libc.h>
size_t	ft_numlen(int nbr)
{
	int n;
	size_t i;

	n = nbr;
	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char    *ft_itoabase(int n, int base)
{
       int                     num;
       int                     len;
       static char     *ret;
       static int      i;

       i = 0;
       num = n;
       len = ft_numlen(n);
       if(!(ret = ft_strnew(len + 1)))
               return (NULL);
       ret[len--] = '\0';
       if (num < 0)
       {
               num *= -1;
               ret[i] = '-';
               i++;
       }
       if (num > base)
               ft_itoabase(num / base, base);
       if (num % base > 9)
               ret[i++] = (char)((num % base) + 87);
       else
               ret[i++] = (char)((num % base) + 48);
       return (ret);
}

int		main()
{
	printf("%s\n", ft_itoabase(7549, 13));
	return (0);
}
