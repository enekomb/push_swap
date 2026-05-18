/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:54:15 by emunoz            #+#    #+#             */
/*   Updated: 2023/02/02 11:57:34 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"

int	ft_set_format(char f, va_list arg)
{
	int	i;

	i = 0;
	if (f == 'c')
		i = ft_putchar(va_arg(arg, int));
	else if (f == 's')
		i = ft_putstr(va_arg(arg, char *));
	else if (f == 'p')
		i = ft_putstr("0x") + ft_puthexa(va_arg(arg, size_t), f);
	else if (f == 'd' || f == 'i')
		i = ft_putint(va_arg(arg, int));
	else if (f == 'u')
		i = ft_putintu(va_arg(arg, unsigned int));
	else if (f == 'x' || f == 'X')
		i = ft_puthexa(va_arg(arg, unsigned int), f);
	else if (f == '%')
		i = ft_putchar('%');
	return (i);
}
