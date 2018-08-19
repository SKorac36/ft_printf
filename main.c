/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 07:20:42 by skorac            #+#    #+#             */
/*   Updated: 2018/08/16 15:57:46 by skorac           ###   ########.fr       */
/*   Updated: 2018/07/27 11:27:23 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

int main(void)
{
	int n = 10;
	
	ft_printf("%D\n", INT_MAX);
	printf("");
	ft_printf("ft_str :%s\n", L"123");
	printf("str :%s\n", "123");
	ft_printf("chr :%chello %s\n", 'c', "hello again");
	printf("chr :%chello %s\n", 'c', "hello again");
	ft_printf("ft_int :%d\n", -123);
	printf("int :%d\n", -123);
	ft_printf("ft_per :%%\n");
	printf("per :%%\n");
	ft_printf("ft_wchr :%C\n", L'☠');
	printf("wchr :%C\n" , L'☠'); 
	ft_printf("ft_wstr :%S\n", L"123");
	printf("wstr :%S\n", L"hello");
	ft_printf("ft_dlong :%D\n", -123);
	printf("dlong :%D\n", -123);
	ft_printf("ft_hex :%X\n", 42);
	printf("hex :%X\n", 42);
	ft_printf("ft_unsigned :%u\n", -123);
	ft_printf("unsigned :%u\n", (long long)123);
	ft_printf("ft_unlong :%U\n", -0);
	printf("unlong :%U\n", -123);
	ft_printf("ft_eye :%i\n", -123);
	printf("eye :%i\n", -123);
	//printf("%lli", (long long)56);
	return (0);
}
