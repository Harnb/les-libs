/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlachau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:17:16 by rlachau           #+#    #+#             */
/*   Updated: 2021/11/07 18:34:25 by rlachau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr_base(size_t nb, char base, char casse)
{
	char	c;

	c = (nb % base);
	if (nb < (size_t)base && nb < 10)
		return (ft_putchar(c + '0'));
	else if (nb < (size_t)base && nb > 9)
	{
		if (casse == 0)
			return (ft_putchar(c + 'a' - 10));
		return (ft_putchar(c + 'A' - 10));
	}
	if (c >= 10)
	{
		if (casse == 0)
			return (ft_putunbr_base(nb / base, base, casse)
				+ ft_putchar(c + 'a' - 10));
		return (ft_putunbr_base(nb / base, base, casse)
			+ ft_putchar(c + 'A' - 10));
	}
	return (ft_putunbr_base(nb / base, base, casse)
		+ ft_putchar(c + '0'));
}
