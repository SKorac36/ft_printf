#include "libft/libft.h"
#include "ft_printf.h"

void	ft_pad(int strlen, t_arg_form *arg)
{
	int	width;

	if (!arg->width)
		width = 0;
	else
		width = arg->width;
	while (strlen < width)
	{
		if (arg->flag_space)
			ft_putchar(' ');
		else if (arg->flag_zero)
			ft_putchar('0');
		strlen++;
	}
}
