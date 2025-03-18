/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:13:11 by nmeintje          #+#    #+#             */
/*   Updated: 2024/05/14 11:07:50 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return (0);
}
/* 'form' should be a pointer here, but I passed evaluation with it like
this and I want to keep an accurate record of my time at Hive so I have
not updated this code since I passed the evaluation*/
static int	ft_format(va_list args, const char form)
{
	void	*ptr;

	if (form == 'c')
		return (ft_print_char((va_arg(args, int))));
	else if (form == 's')
		return (ft_print_str((va_arg(args, char *))));
	else if (form == 'd' || form == 'i')
		return (ft_print_nbr((va_arg(args, int))));
	else if (form == 'x' || form == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), form));
	else if (form == 'p')
	{
		ptr = va_arg(args, void *);
		if (ptr)
			return (ft_print_addr(ptr));
		return (ft_print_str("0x0"));
	}
	else if (form == 'u')
		return (ft_print_unsigned((va_arg(args, unsigned int))));
	else if (form == '%')
		return (ft_print_char('%'));
	else
		return (0);
}

int	ft_parse_format(const char *str, va_list args)
{
	int	i;
	int	len;
	int	temp;

	i = 0;
	len = 0;
	while (*(str + i))
	{
		temp = len;
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			len += ft_format(args, str[i + 1]);
			i++;
		}
		else
			len += ft_print_char(str[i]);
		if (len < temp)
			return (-1);
		if (str[i])
			i++;
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	if (!str)
		return (-1);
	va_start(args, str);
	len = ft_parse_format(str, args);
	va_end(args);
	return (len);
}
