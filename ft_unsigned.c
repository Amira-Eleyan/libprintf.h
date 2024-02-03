/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdel-m <aabdel-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:17:17 by aabdel-m          #+#    #+#             */
/*   Updated: 2024/02/03 17:43:57 by aabdel-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
		i += ft_unsigned(n / 10);
	ft_character(n % 10 + '0');
	return (i + 1);
}
