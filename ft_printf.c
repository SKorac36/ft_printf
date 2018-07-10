/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 07:20:42 by skorac            #+#    #+#             */
/*   Updated: 2018/07/10 12:23:09 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"
#include "ft_printf.h"

void		ft_printf(const char* format, ...)
{
    va_list args;
	va_start(args, format);

    while (*format != '\0')
    {
        if (*format == '%' && *(format + 1) == 'd')
			ft_putnbr(va_arg(args, int));
		else if(*format == '%' && *(format + 1) == 'c')
			ft_putchar(va_arg(args, int));
		else if(*format == '%' && *(format + 1) == 's')
            ft_putstr(va_arg(args, char *));
		else if (*format == '%' && *(format + 1) == '%')
			ft_putchar('%');
		else if (*format == '%' && *(format + 1) == 'o')
			ft_putoctal(va_arg(args, int));
		else if (*format == '%' && *(format + 1) == 'x')
			ft_puthex(va_arg(args, int));
		else if (*format && *(format - 1) != '%')
            ft_putchar(*format);
		++format;
   	 	}
    va_end(args);
}


int main(void)
{
	ft_printf("%o\n", '\0');

	printf("%d\n" ,0); 
	return (0);
}
