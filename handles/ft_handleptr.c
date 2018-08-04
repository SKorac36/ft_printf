/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:21:36 by skorac            #+#    #+#             */
/*   Updated: 2018/08/04 12:00:40 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	ft_handleptr(char *str)
{
	long temp;

	temp = (long)str;
	ft_putstr("0x");
	ft_putstr(ft_itoabase(temp, 16));
	ft_puthex(temp);

}

int		main()
{
	char *ptr;
	char a;

	a = '1';
	ptr = &a;
	ft_handleptr(ptr);
	write(1, "\n", 1);
	printf("%p\n", ptr);
	return (0);
}
