/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 11:14:40 by skorac            #+#    #+#             */
/*   Updated: 2018/08/02 15:07:14 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# define MOD_SPEC "sSpdDioOuUxXcC"

typedef		s_arg_form
{
	int		flag_plus;
	int		flag_left_just;
	int		flag_zero;
	int		flag_space;
	int		flag_pound;
	unsigned int	width;
	unsigned int	precision;
	char			length;
	char			specifier;
}			t_arg_form;

#endif
