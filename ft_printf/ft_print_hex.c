/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:28:09 by nmeintje          #+#    #+#             */
/*   Updated: 2024/05/09 10:14:22 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long nb, char form)
{
	char			*base;
	unsigned int	num;
	int				i;
	int				result;
	int				error;

	if (form == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	i = 0;
	num = (unsigned int)nb;
	if (num > (16 - 1))
	{
		error = ft_print_hex((num / 16), form);
		if (error == -1)
			return (-1);
		i += error;
	}
	result = ft_print_char(*(base + (num % 16)));
	if (result == -1)
		return (-1);
	i += result;
	return (i);
}
