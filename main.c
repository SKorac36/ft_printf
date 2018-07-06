/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 07:20:42 by skorac            #+#    #+#             */
/*   Updated: 2018/07/06 12:13:43 by skorac           ###   ########.fr       */
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
    if(n >= 10)
	{
		ft_putnbr(n/10);
		ft_putnbr(n % 10);
	}
	ft_putchar(n + 48);
}

void ft_printf(const char* format, ...)
{
    va_list args;
    va_start(args, format);

    while (*format != '\0')
    {
        if (*format == '%' && *(format + 1) == 'd')
        {
            int i = va_arg(args, int);
            ft_putnbr(i);
        }
		else if(*format == '%' && *(format + 1) == 'c')
		{
			char c = va_arg(args, int);
			ft_putchar(c);
		}
		else if(*format == '%' && *(format + 1) == 's')
            ft_putstr(va_arg(args, char *));
        else if (*format && *(format - 1) != '%')
            ft_putchar(*format);
        ++format;
    }
    va_end(args);
}

int main(void)
{
	ft_printf("i\n");	
	ft_printf("%d%d%s%c\n", 3, 5, "hello", 'Q');
	return (0);
}
