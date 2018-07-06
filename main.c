/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 07:20:42 by skorac            #+#    #+#             */
/*   Updated: 2018/07/06 13:47:14 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(char *str)
{
    int i;

	i = 0;
    while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
        
}

void	ft_putnbr(int n)
{
    if (n != 0)
	{
		ft_putnbr(n / 10);
		n = n % 10 + '0';
		ft_putchar(n);
	}
}

void	ft_putoctal(int n)
{
	if (n != 0)
	{
		ft_putoctal(n / 8);
		n = n % 8 + '0';
		ft_putchar(n) ;
	}
}

void	ft_puthex(int n)
{
	if (n >= 16)
		ft_puthex(n / 16);
	n = n % 16;
	n += n < 10 ? '0' : 'a' - 10;
	write(1, &n, 1);
}

void ft_printf(const char* format, ...)
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
		else if (*format && *(format - 1) != '%')
            ft_putchar(*format);
        ++format;
   	 	}

    va_end(args);
}


int main(void)
{
	ft_printf("%o\n", 350);
	printf("%o\n", 350);
	ft_puthex(233);
	ft_putchar('\n');
	printf("%x\n", 233);
	ft_printf("%%%d%d%s%c\n", 0, 5, "hello", 'Q');
	return (0);
}
