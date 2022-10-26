/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:15:38 by obouhrir          #+#    #+#             */
/*   Updated: 2022/10/26 20:05:34 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <string.h>

int	ft_putchar(int c);
int	ft_printf(const char *str, ...);
int	ft_putnbr(long n);
int	ft_putstr(char *str);
int	ft_hexad(unsigned int nb, char *base);
int	ft_adresse(unsigned long nb, char *base);
int	ft_putunsign(unsigned int nb);

#endif