/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 09:34:40 by nmeintje          #+#    #+#             */
/*   Updated: 2024/05/14 11:07:46 by nmeintje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

/* ************************************************************************* */
/*                              PRINTF                                       */
/* ************************************************************************* */

int		ft_printf(const char *str, ...);

/* ************************************************************************* */
/*                              WRITE FUNCTIONS                              */
/* ************************************************************************* */

int		ft_print_char(char c);
int		ft_print_str(char *s);
int		ft_print_nbr(int nb);
int		ft_print_hex(unsigned long nb, char form);
int		ft_print_addr(void *addr);
int		ft_print_unsigned(unsigned long nb);

/* ************************************************************************* */
/*                            HELPER FUNCTIONS                               */
/* ************************************************************************* */

size_t	ft_strlen(const char *str);

#endif
