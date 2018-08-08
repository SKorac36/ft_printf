/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_handle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 14:21:51 by skorac            #+#    #+#             */
/*   Updated: 2018/08/08 10:42:25 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		flag_handle(char *flag)
{
	t_arg_form	*arg;

	arg = initflag(void);
	ft_flag(flag, arg);
	ft_width(flag, arg);
	ft_precision(flag, arg);
	ft_length(flag, arg);
	ft_specifier(flag, arg);
	return (36);
}
