/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 08:49:07 by skorac            #+#    #+#             */
/*   Updated: 2018/07/27 08:49:48 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_wchar(wchar_t c)
{
	write(1, &c, 1);
}