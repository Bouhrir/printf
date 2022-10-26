/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexad.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:54:39 by obouhrir          #+#    #+#             */
/*   Updated: 2022/10/26 12:58:49 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexad(unsigned int nb, char *base)
{
	int	count;

	count = 0;
	if (nb >= 0 && nb <= 15)
	{
		count += ft_putchar(base[nb]);
	}
	if (nb > 15)
	{
		count += ft_hexad(nb / 16, base);
		count += ft_hexad(nb % 16, base);
	}
	return (count);
}
