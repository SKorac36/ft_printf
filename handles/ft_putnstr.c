#include "../include/ft_printf.h"

void	ft_putnstr(const char *str, int i)
{
	int n;

	n = 0;
	while (n < i)
		ft_putchar(str[n++]);
}
