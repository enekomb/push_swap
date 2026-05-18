/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:06:45 by emunoz            #+#    #+#             */
/*   Updated: 2023/02/02 11:57:52 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"

int	ft_printf(char const *format, ...)
{
	va_list	arg;
	int		n;

	if (!format)
		return (0);
	va_start(arg, format);
	n = 0;
	while (*format)
	{
		if (*format != '%')
			n += ft_putchar(*format);
		else
		{
			format++;
			n += ft_set_format(*format, arg);
		}
		format++;
	}
	va_end(arg);
	return (n);
}
