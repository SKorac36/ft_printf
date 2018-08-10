#include "libft.h"
#include "ft_print.h"

size_t	ft_handlelong(va_list *args, t_arg *arg, const char **format)
{
	arg->length = l;
	arg->specifier = 'd';
	return (ft_handleint(args, arg, format));
}
