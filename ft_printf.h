/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdel-m <aabdel-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:07:21 by aabdel-m          #+#    #+#             */
/*   Updated: 2024/02/03 17:43:49 by aabdel-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_character(int c);
int	ft_number(int c);
int	ft_isstrg(char *s);
int	ft_ishex(unsigned int hex, char c);
int	ft_unsigned(unsigned int n);
int	ft_isptr(void *p);

#endif