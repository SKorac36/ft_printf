/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 11:14:40 by skorac            #+#    #+#             */
/*   Updated: 2018/08/16 15:57:09 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/libft.h"
# include <limits.h>
# include <wchar.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>
# include <sys/types.h>
# include <inttypes.h>
# define MOD_SPEC "sSpdDioOuUxXcC%"
# define LEN_SPEC "hljz"
typedef	struct		s_arg_form
{
	char	specifier;
	enum
	{
		none,
		hh,
		h,
		l,
		ll,
		j,
		z
	}		length;
}					t_arg_form;
void				ft_putnstr(const char *str, int i);
char				*ft_utoabase(uintmax_t n, const unsigned int base);
char				*ft_itoabase(intmax_t val, int base);
size_t				ft_handleint(va_list *args, t_arg_form *arg);
size_t				ft_handleptr(va_list *args, t_arg_form *arg);
size_t				ft_handlehex(va_list *args, t_arg_form *arg);
size_t				ft_handleoctal(va_list *args, t_arg_form *arg);
size_t				ft_handleper(va_list *args, t_arg_form *arg);
size_t				ft_handlestr(va_list *args, t_arg_form *arg);
size_t				ft_handleunsignedint(va_list *args, t_arg_form *arg);
size_t				ft_handlewchr(va_list *args, t_arg_form *arg);
size_t				ft_handlewstr(va_list *args, t_arg_form *arg);
intmax_t			ft_getsigned(va_list *args, t_arg_form *arg);
size_t				ft_findlen(const char *str);
char				*ft_extractformat(const char *str, int i);
void				ft_checklength(const char *fmt, t_arg_form *arg);
void				ft_putwchar(wchar_t w);
void				ft_putwstr(wchar_t *str);
uintmax_t			ft_giveunsigned(va_list *args, t_arg_form *arg);
t_arg_form			*ft_initflags(void);
ssize_t				ft_dohandles(va_list *args, t_arg_form *arg);
size_t				ft_handlelong(va_list *args, t_arg_form *arg);
int				ft_printf(const char *format, ...);
int				ft_flag_spec(char *p, t_arg_form *arg);
size_t				ft_handlechar(va_list *args, t_arg_form *arg);
void				ft_length_spec(char *p, t_arg_form *arg, size_t i);

#endif
