/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 11:14:40 by skorac            #+#    #+#             */
/*   Updated: 2018/08/06 14:24:07 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# define MOD_SPEC "sSpdDioOuUxXcC"

typedef	struct	s_arg_form
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

size_t	ft_numlen(int nbr);
char	*ft_itoabase(int n, int base);
void	ft_handleint(int n);
void	ft_handleptr(char *str);
void	ft_handleeye(int i);
void	ft_handlehex(unsigned int num, t_arg_form *form);
void	ft_handleoctal(unsigned int n);
void	ft_handleper(void);
void	ft_handlestr(char *str);
void	ft_handleunsignedint(unsigned int i);
void	ft_handlewchr(wchar_t c);
void	ft_handlewstr(wchar_t *str);

#endif
