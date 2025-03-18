/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:48:29 by nmeintje          #+#    #+#             */
/*   Updated: 2024/05/10 14:46:36 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *s)
{
	ssize_t	bytes;

	if (!s)
	{
		return (write(1, "(null)", 6));
	}
	bytes = write(1, s, ft_strlen(s));
	if (bytes == -1)
		return (-1);
	return (ft_strlen(s));
}
