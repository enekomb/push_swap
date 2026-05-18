/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printflib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:50:36 by emunoz            #+#    #+#             */
/*   Updated: 2023/02/02 11:55:14 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTFLIB_H
# define PRINTFLIB_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(char const *format, ...);
int		ft_set_format(char f, va_list arg);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putint(int n);
int		ft_putintu(unsigned int n);
int		ft_puthexa(size_t n, char c);
#endif