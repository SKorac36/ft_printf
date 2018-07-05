/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 07:20:42 by skorac            #+#    #+#             */
/*   Updated: 2018/07/05 08:36:47 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

void pc(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *s)
{
    s--;
    while(*++s)
        write(1, &*s, 1);
}

void nb(int n)
{
    if(n >= 0 && n <= 9)
    {
        pc(n + 48);
        return ;
    }
    nb(n / 10);
    pc(n % 10 + '0');
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
            nb(i);

        }
        else if(*format == '%' && *(format + 1) == 's')
            ft_putstr(va_arg(args, char *));
        else if (*format && *(format - 1) != '%')
            pc(*format);
        ++format;
    }
    va_end(args);
}

int main(void)
{
    ft_printf("some bulshit here %d %d some bullshit after %s\n", 3, 5, "hello");
}
