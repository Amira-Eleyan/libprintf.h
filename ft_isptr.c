/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdel-m <aabdel-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:27:35 by aabdel-m          #+#    #+#             */
/*   Updated: 2024/02/03 17:43:37 by aabdel-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_recursion(unsigned long n)
{
	int	i;

	i = 1;
	if (n >= 16)
	{
		i += ft_recursion(n / 16);
	}
	ft_character("0123456789abcdef"[n % 16]);
	return (i);
}

int	ft_isptr(void *p)
{
	int				i;
	unsigned long	n;
	const char		*hex_digits;

	i = 2;
	hex_digits = "0123456789abcdef";
	ft_isstrg("0x");
	n = (unsigned long)p;
	i += ft_recursion(n);
	return (i);
}
