/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ishex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdel-m <aabdel-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:23:04 by aabdel-m          #+#    #+#             */
/*   Updated: 2024/02/01 18:10:12 by aabdel-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 'printf.h'

int ishex(unsigned int hex, char c)
{
	int	i;
	
	i = 0;
	if (c == 'x')
		const char hex_digits[] = "0123456789abcdef";
	if (c == 'X')
		const char hex_digits[] = "0123456789ABCDEF";
	if (hex > 16)
	{
		ishex(hex / 16);
		i++;
	}
	ft_putchar_fd(hex_digits[hex % 16],1);
	return(i);
}
