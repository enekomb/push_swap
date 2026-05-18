/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:19:01 by emunoz            #+#    #+#             */
/*   Updated: 2023/02/02 11:57:43 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"

int	ft_puthexa(size_t n, char f)
{
	int	i;

	i = 0;
	if (f == 'x' || f == 'p')
	{
		if (n >= 16)
			i += ft_puthexa(n / 16, f);
		i += ft_putchar("0123456789abcdef"[n % 16]);
	}
	else if (f == 'X')
	{
		if (n >= 16)
			i += ft_puthexa(n / 16, f);
		i += ft_putchar("0123456789ABCDEF"[n % 16]);
	}
	return (i);
}
