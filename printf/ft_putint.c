/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:00:51 by emunoz            #+#    #+#             */
/*   Updated: 2023/02/02 11:57:41 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"

int	ft_putint(int n)
{
	unsigned int	num;
	int				i;

	i = 0;
	if (n < 0)
	{
		i = ft_putchar('-');
		num = n * -1;
	}
	else
	{
		num = n;
	}
	if (num >= 10)
	{
		i += ft_putint(num / 10);
	}
	i += ft_putchar(num % 10 + '0');
	return (i);
}

int	ft_putintu(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
	{
		i += ft_putintu(n / 10);
	}
	i += ft_putchar(n % 10 + '0');
	return (i);
}
