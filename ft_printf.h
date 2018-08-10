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
	char			length;
	char			specifier;
}			t_arg_form;

size_t	ft_numlen(uintmax_t nbr);
char	*ft_itoabase(int n, int base);
void	ft_handleint(voi);
void	ft_handleptr(char *str);
void	ft_handleeye(char *);
size_t	ft_handlehex(va_list *args, t_arg_form *arg, const char **format);
size_t	ft_handleoctal(va_list *arg, t_arg_form *arg, const char **format);
size_t	ft_handleper(va_list *args, t_arg_form *arg, const char **format);
size_t	ft_handlestr(va_list *args, t_arg_form *arg, const char **format);
size_t	ft_handleunsignedint(va_list *args, t_arg_form *arg, const char **format);
void	ft_handlewchr(wchar_t c);
void	ft_handlewstr(va_list *args, t_arg_form *arg, const char **format);
static intmax_t	ft_getsigned(va_list *args, t_arg *arg);

#endif
