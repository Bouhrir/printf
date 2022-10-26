/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:31:19 by obouhrir          #+#    #+#             */
/*   Updated: 2022/10/26 16:36:30 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pf(const char *str, va_list list)
{
	int	i;

	i = 0;
	if (str[i] == 'c')
		return (ft_putchar(va_arg(list, int)));
	if (str[i] == 's')
		return (ft_putstr(va_arg(list, char *)));
	if (str[i] == 'p')
	{	
		ft_putstr("0x");
		return (2 + ft_adresse(va_arg(list, unsigned long), \
		"0123456789abcdef"));
	}
	if (str[i] == 'd' || str[i] == 'i')
		return (ft_putnbr(va_arg(list, int)));
	if (str[i] == 'u')
		return (ft_putunsign(va_arg(list, unsigned int)));
	if (str[i] == 'x')
		return (ft_hexad(va_arg(list, unsigned int), "0123456789abcdef"));
	if (str[i] == 'X')
		return (ft_hexad(va_arg(list, unsigned int), "0123456789ABCDEF"));
	if (str[i] == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	list;

	va_start(list, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != '%')
			count += ft_putchar(str[i]);
		else
		{
			i++;
			count += pf(&str[i], list);
		}
		i++;
	}
	va_end(list);
	return (count);
}
