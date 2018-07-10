/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putoctal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 12:30:33 by skorac            #+#    #+#             */
/*   Updated: 2018/07/10 12:31:34 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putoctal(int n)
{
    if (n != 0)
    {
        ft_putoctal(n / 8);
        n = n % 8 + '0';
        ft_putchar(n) ;
    }
}
