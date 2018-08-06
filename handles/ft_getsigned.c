/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getsigned.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 10:27:31 by skorac            #+#    #+#             */
/*   Updated: 2018/08/06 10:37:31 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static intmax_t		ft_getsigned(va_list *args, t_arg *arg)
{
	intmax_t nbr;

	nbr = va_arg(*args, intmax_t);
	if (arg->length == hh)
		nbr = (signed char)nbr;
	else if (arg->length == h)
		nbr = (short int)nbr;
	else if (arg->length == l)
		nbr = (long int)nbr;
	else if (arg->length == ll)
		nbr = (long long int)nbr;
	else if (arg->length == j)
		nbr = (intmax_t)nbr;
	else if (arg->length == z)
		nbr = (size_t)nbr;
	else
		nbr = (int)nbr;
	return (nbr);
}
