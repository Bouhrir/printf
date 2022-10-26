/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adresse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:51:03 by obouhrir          #+#    #+#             */
/*   Updated: 2022/10/26 16:31:19 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_adresse(unsigned long nb, char *base)
{
	int	count;

	count = 0;
	if (nb >= 0 && nb <= 15)
	{
		count += ft_putchar(base[nb]);
	}
	if (nb > 15)
	{
		count += ft_adresse(nb / 16, base);
		count += ft_adresse(nb % 16, base);
	}
	return (count);
}
