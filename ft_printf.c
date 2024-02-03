/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdel-m <aabdel-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:13:37 by aabdel-m          #+#    #+#             */
/*   Updated: 2024/02/03 17:43:32 by aabdel-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	ft_type(char c, va_list argptr)
{
	int	i;

	i = 0;
	if (c == 'i' || c == 'd')
		i += ft_number(va_arg(argptr, int));
	else if (c == 'c')
		i += ft_character(va_arg(argptr, int));
	else if (c == 's')
		i += ft_isstrg(va_arg(argptr, char *));
	else if (c == 'p')
		i += ft_isptr(va_arg(argptr, void *));
	else if (c == 'x' || c == 'X')
		i += ft_ishex(va_arg(argptr, unsigned int), c);
	else if (c == 'u')
		i += ft_unsigned(va_arg(argptr, unsigned int));
	else
		i += ft_character(c);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	argptr;

	va_start(argptr, str);
	i = 0;
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			i += ft_type(*str, argptr);
			str++;
		}
		else
		{
			i += ft_character(*str);
			str++;
		}
	}
	return (i);
}
