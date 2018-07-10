/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putoctal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 11:47:45 by skorac            #+#    #+#             */
/*   Updated: 2018/07/10 12:13:34 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putoctal(int n)
{
    while (n >= 8)
    {
        ft_putoctal(n / 8);
        n = n % 8 + '0';
        ft_putchar(n) ;
    }
}
