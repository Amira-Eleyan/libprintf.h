/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ishex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdel-m <aabdel-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:23:04 by aabdel-m          #+#    #+#             */
/*   Updated: 2024/02/03 17:44:26 by aabdel-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ishex(unsigned int hex, char c)
{
	int			i;
	const char	*hex_digits;

	i = 0;
	if (c == 'x')
		hex_digits = "0123456789abcdef";
	else
		hex_digits = "0123456789ABCDEF";
	if (hex >= 16)
	{
		i += ft_ishex(hex / 16, c);
	}
	ft_character(hex_digits[hex % 16]);
	return (i + 1);
}
