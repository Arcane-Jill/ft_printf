/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_addr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:05:55 by nmeintje          #+#    #+#             */
/*   Updated: 2024/05/09 11:03:30 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_convert(unsigned long n, const char *base)
{
	int	i;

	i = 0;
	if (n > (ft_strlen(base) - 1))
		i += ft_convert(n / ft_strlen(base), base);
	i += ft_print_char(base[n % ft_strlen(base)]);
	return (i);
}

int	ft_print_addr(void *addr)
{
	unsigned long	address;
	size_t			length;
	const char		*base;
	long			outcome;

	length = 0;
	address = (unsigned long)addr;
	base = "0123456789abcdef";
	outcome = ft_print_str("0x");
	if (outcome == -1)
		return (-1);
	length += outcome;
	length += ft_convert(address, base);
	return (length);
}
