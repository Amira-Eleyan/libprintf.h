/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdel-m <aabdel-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:13:37 by aabdel-m          #+#    #+#             */
/*   Updated: 2024/02/01 18:32:21 by aabdel-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 'printf.h'
#include <stdarg.h>

/*{
	int	i;
	
	i = 0;
	if (c == 'i' || 'd')
	{
		ft_putnbr(va_arg(argptr, int));
		int x;
		x = va_arg(argptr, int);
		while(x)
		{
			x = x/10;
			i++;
		}
		return (i);
	}
	i = 0;
	if (c == 'c')
	{
		ft_putchar(va_arg(argptr, char))
		return (1);
	}
	if (c == '%')
	{
		ft_putchar('%');
		return(1);
	}
	if (c == 's')
	{
		char *st;
		st = va_arg(argptr, char *);
		while(*st)
		{
			ft_putchar(*st);
			st++;
		}
		return(ft_strlen(st));
	}
	if (c == 'p')
	{
		void *ptr;
		ptr = va_arg(argptr, void *);
		while(*ptr)
			
			i++;
		return (i);

	}
	i = 0;
	if (c == 'x')
	{
		unsigned int hex;
		unsigned int rest;
		hex = va_arg(argptr, unsigned int);
		const char hex_digits[] = "0123456789abcdef";
		while (hex)
		{
			rest = hex % 16;
			ft_putchar(hex_digits[rest]);
			hex = hex/16;
			i++;
		}
		return (i);	
	}
	i = 0;
	if (c == 'X')
	{
		unsigned int hex;
		unsigned int rest;
		hex = va_arg(argptr, unsigned int);
		const char hex_digits[] = "0123456789ABCDEF";
		while (hex)
		{
			rest = hex % 16;
			ft_putchar(hex_digits[rest]);
			hex = hex/16;
			i++;
		}
		return (i);	
	}	
}*/
static int ft_type (char c, va_list argptr)
{
	int	i;
	
	i = 0;
	if (c == 'i' || 'd')
		i += isnumber(va_arg(arptr, int));
	if (c == 'c'||'%')
		i+=ischaracter(va_arg(arptr, char));
	if (c == 's')
		i+=isstrg(va_arg(arptr, char *));
	if (c == 'p')
		i+=isstrg(va_arg(arptr, void *));
	if (c == 'x'||'X')
		i+=ishex(va_arg(arptr, unsigned int));
	if (c == 'u')
		i+=ft_unsigned(va_arg(arptr, unsigned int));
	retrun (i);
}

int ft_printf(const char *str, ...)
{
	int		i;
	char	c;
	int		result;
	va_list	argptr;
	
	va_start(argptr,str)
	i = 0;
	while (str[i] != '\0' && result!= -1)
	{
		if (str[i] == '%')
		{
			c = str[i+1];
			i+=ft_type (c, argptr);
			
		}
		else
			if(write(1, &str[i], 1) < 0)
				result = -1;
			else
				result++;
		i++;
	}
}


