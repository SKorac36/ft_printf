/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handleflags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 10:29:40 by skorac            #+#    #+#             */
/*   Updated: 2018/07/31 10:48:58 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

char	*handleplus(int arg)
{
	char *in;
	char *ret;

	in = ft_itoa(arg);
	ret = ft_strjoin("+", in);
	if (arg <= 0)
		return (in);
	return (ret);
	
}

char	*handlespace(int arg)
{
	char *in;

	in = ft_itoa(arg);
	if (arg < 0)
		return (in);
	return(ft_strjoin(" ", in));

}
char	*handlepound(int arg, char type)
{
	char *in;
	
	in = ft_itoa(arg);
	if (type == 'x')
		return (ft_strjoin("0x", in));
	else if (type == 'X')
		return (ft_strjoin("0X", in));
	else if (type == 'o')
		return (ft_strjoin("0", in));
	return (in);
	
}

char	*handlezero(char *str)
{
	char *ret;
	int i;

	i = 0;
	ret = (char *)malloc(sizeof(char) *(ft_strlen(str + 1)));
	while (str[i])
	{
		if (str[i] == ' ')
			ret[i] = '0';
		else
			ret[i] = str[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

int	main()
{
	char *p = handleplus(87);
	char *s = handlespace(78);
	char *h = handlepound(8, '6');
	char *z = handlezero("   78");

	ft_putendl(p);
	ft_putendl(s);
	ft_putendl(h);
	ft_putendl(z);
	return (0);
}
