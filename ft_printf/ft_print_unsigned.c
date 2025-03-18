/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:34:12 by nmeintje          #+#    #+#             */
/*   Updated: 2024/05/10 16:45:28 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned long nb)
{
	int		i;
	char	*base;
	int		result;
	int		error;

	i = 0;
	base = "0123456789";
	if (nb > (ft_strlen(base) - 1))
	{
		error = ft_print_unsigned(nb / ft_strlen(base));
		if (error == -1)
			return (-1);
		i += error;
	}
	result = ft_print_char(base[nb % ft_strlen(base)]);
	if (result == -1)
		return (-1);
	i += result;
	return (i);
}
