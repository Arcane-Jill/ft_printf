/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:06:46 by nmeintje          #+#    #+#             */
/*   Updated: 2024/05/13 11:37:33 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_size(long num)
{
	int	count;

	count = 0;
	if (num < 1)
		count++;
	while (num)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

static char	*new_ptr(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

static char	*ft_itoa(int n)
{
	long int	num;
	size_t		count;
	char		*string;

	num = n;
	count = count_size(n);
	if (n < 0)
		num *= -1;
	string = new_ptr(count);
	if (!string)
		return (NULL);
	*(string + count) = '\0';
	while (count--)
	{
		*(string + count) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(string + 0) = '-';
	return (string);
}

int	ft_print_nbr(int nb)
{
	int		len;
	char	*num;
	int		error;

	len = 0;
	num = ft_itoa(nb);
	if (!num)
		return (-1);
	error = ft_print_str(num);
	if (error == -1)
	{
		free(num);
		return (-1);
	}
	len += error;
	free(num);
	return (len);
}
