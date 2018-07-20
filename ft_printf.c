/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 07:20:42 by skorac            #+#    #+#             */
/*   Updated: 2018/07/20 12:07:51 by skorac           ###   ########.fr       */
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
		else if(*format == '%' && ((*(format + 1) == 'c') || *(format + 1) == 'C'))
			ft_putchar(va_arg(args, int));
		else if(*format == '%' && *(format + 1) == 'i')
			ft_putnbr(va_arg(args, int));
		else if(*format == '%' && *(format + 1) == 's')
			ft_putstr(va_arg(args, char *));
		else if (*format == '%' && *(format + 1) == '%')
		{
			ft_putchar('%');
			++format;
		}
		else if (*format == '%' && *(format + 1) == 'u')
			ft_putnbr(va_arg(args, unsigned int));
		else if (*format == '%' && *(format + 1) == 'o')
			ft_putoctal(va_arg(args, int));
		else if (*format == '%' && ((*(format + 1) == 'x') || *(format + 1) == 'X'))
			ft_puthex(va_arg(args, int));
		else if (*format == '%' && *(format + 1) == 'p')
		{
			ft_putstr("0x");
			ft_puthex(va_arg(args, int));
		}
		else if (*format && *(format - 1) != '%')
            ft_putchar(*format);
		++format;
   	 	}
    va_end(args);
}


int main(void)
{
	int str[5] = {1, 2, 4, 5, 6};
	ft_printf("1 %p\n",65);
	printf("2 %C\n", 65);
	ft_printf("3 %i\n", 65);
	printf("4 %S\n", str);
	ft_printf("5 %% \n");
	ft_printf("6 %o\n", 65);
	ft_printf("7 %x\n", 65);
	ft_printf("8 %X\n", 65);
	printf("9 %%\n"); 
	return (0);
}
